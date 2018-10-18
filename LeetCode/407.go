//407. Trapping Rain Water II

func min(nums...int) int{
    minn:=nums[0]
    i:=1
    for i<len(nums){
        if(nums[i]<minn){minn=nums[i]}
        i++
    }
    return minn;
}
func max(nums...int) int{
    minn:=nums[0];
    i:=1;
    for i<len(nums){
        if(nums[i]>minn){minn=nums[i]}
        i++
    }
    return minn;
}

func trapRainWater(heightMap [][]int) int {
    m:=len(heightMap)
    if m==0 {return 0}
    n:=len(heightMap[0])
    if n==0 {return 0}
    wheight:= make([][]int,m)
    for i:=range wheight{
        wheight[i]=make([]int,n)
        for j:=range wheight[i]{
            if i==0 || i==m-1 || j==0 || j==n-1{
                wheight[i][j]=heightMap[i][j]
            }else{
                wheight[i][j]=int(^uint(0) >> 1) 
            }
        }
    }
    for ;;{
        anychange:=false
        for mi:=0;mi<m;mi++{
            for ni:=0;ni<n;ni++{
                if(mi==0 || mi==m-1 || ni==0 || ni==n-1){
                    continue
                    //wheight[mi][ni]=0
                }else{
                    newheight:=max(min(wheight[mi+1][ni], wheight[mi][ni+1], wheight[mi-1][ni], wheight[mi][ni-1]),heightMap[mi][ni])
                    if(newheight!=wheight[mi][ni]){
                        wheight[mi][ni]=newheight
                        anychange=true
                    }
                }
            }
        }
        if !anychange{
            break
        }
    }
    sum:=0
    for mi:=0;mi<m;mi++{
        for ni:=0;ni<n;ni++{
            sum+=wheight[mi][ni]-heightMap[mi][ni]
        }
    }
    return sum
}


//48. Rotate Image

func rotate(matrix [][]int)  {
    for y,row:=range matrix{
        if(y>=len(matrix)/2){
            return
        }
        for x,_:=range row{
            if(x>=(len(row)+1)/2){
                break;
            }
            //row[x][len(row)-1-y],row[len(row)-1-y][len(row)-1-x]=row[y][x],row[x][len(row)-1-y],row[len(row)-1-x][len(matrix)-1-y]
            matrix[y][x], matrix[len(matrix)-1-x][y], matrix[len(matrix)-1-y][len(matrix)-1-x], matrix[x][len(matrix)-1-y] = matrix[len(matrix)-1-x][y], matrix[len(matrix)-1-y][len(matrix)-1-x], matrix[x][len(matrix)-1-y], matrix[y][x]
        }
    }
}

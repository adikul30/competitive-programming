//903. Valid Permutations for DI Sequence

func numPermsDISequence(S string) int {
	const modulus=1000000007
	tot_leng:=len(S)+1
	pattern_vec:=make([]int,tot_leng)
	pattern_vec[0]=1
	i:=1//i is num of elements
	current:=S[0]
	for {
		num_of_se:=i-1//num of segments
		for {
			for ind,v:=range pattern_vec{
				for inneri:=0;inneri<ind;inneri++{
					pattern_vec[inneri]+=v
					pattern_vec[inneri]%=modulus
				}
				if num_of_se==ind{
					break
				}
			}
			if i==tot_leng-1{
				ret_v:=0
				for _,v:=range pattern_vec{
					ret_v+=v
					ret_v%=modulus
				}
				return ret_v
			}
			if S[i]==current{
				i++
			}else{
				current=S[i]
				i++
				break
			}
		}
		for ind,_:=range pattern_vec{//reverse it
			if ind>=i/2{
				break
			}
			pattern_vec[ind],pattern_vec[i-ind-1]=pattern_vec[i-ind-1],pattern_vec[ind]
		}
	}
}

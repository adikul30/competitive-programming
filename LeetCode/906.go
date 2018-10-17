//906. Super Palindromes

//assuming num_to_check>0
func isPalindrome(num_to_check uint64)bool{
	var rear uint64=0
	rem:=num_to_check%10
	if rem==0{
		return false
	}
	for{
		num_to_check/=10
		if rear==num_to_check{
			return true
		}
		rear*=10
		rear+=rem
		if rear==num_to_check{
			return true
		}
		if rear>num_to_check{
			return false
		}
		rem=num_to_check%10
	}
}
func superpalindromesInRange(L string, R string) int {
	var ul uint64
	var count int=0
	ul,_=strconv.ParseUint(L,10,64)
	ir,_:=new(big.Int).SetString(R,10)
	var irr big.Int
	urr:=irr.Sqrt(ir).Uint64()
	limit:=urr
	var rear uint64=1
	for{
		rem:=limit%10
		limit/=10
		if rear>limit{
			revs:=reverseu(limit)
			if urr%rear<revs{
				if revs==1 && rem==0{
					iter_even(&count,ul,rear,limit*10-1)
					//return limit*10-1,2
				}else{
					iter_odd(&count,ul,rear,limit*10+rem-1)
					//return limit*10+rem-1,1
				}
			}else{
				iter_odd(&count,ul,rear,limit*10+rem)
				//return limit*10+rem,1
			}
			return count
		}
		rear*=10
		if rear>limit{
			revs:=reverseu(limit)
			if urr%rear<revs{
				if revs==1{
					iter_odd(&count,ul,rear/10,limit*10-1)
					//return limit*10-1,1
				}else{
					iter_even(&count,ul,rear,limit-1)
					//return limit-1,2
				}
			}else{
				iter_even(&count,ul,rear,limit)
				//return limit,2
			}
			return count
		}
	}
}
func iter_odd(count *int,ul,mul,limit uint64){
	for{
		revs:=reverseu(limit/10)
		palindrome:=mul*limit+revs
		sp:=palindrome*palindrome
		if isPalindrome(sp){
			if(sp<=ul){
				if(sp==ul){
					*count++
				}
				return
			}
			*count++
		}
		if revs==1 && limit%10==0{
			iter_even(count,ul,mul,limit-1)
			return
		}
		limit--
	}
}
func iter_even(count *int,ul,mul,limit uint64){
	for{
		revs:=reverseu(limit)
		palindrome:=mul*limit+revs
		sp:=palindrome*palindrome
		if isPalindrome(sp){
			if(sp<=ul){
				if(sp==ul){
					*count++
				}
				return
			}
			*count++
		}
		if revs==1{
			iter_odd(count,ul,mul/10,limit*10-1)
			return
		}
		limit--
	}
}
func reverseu(u uint64)uint64{
	var rear uint64=0
	for u!=0{
		rem:=u%10
		u/=10
		rear*=10
		rear+=rem
	}
	return rear
}

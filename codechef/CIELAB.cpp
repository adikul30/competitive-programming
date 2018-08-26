#include <bits/stdc++.h>

using namespace std;

int main() {

	int first, second ,count=0;
	int difference ,temp,arr[4];

	scanf("%d",&first);
	scanf("%d",&second);

	difference = first - second ;
	if (difference==0){
		printf("1\n");
	}
	else if (difference % 10 == 9){
		difference--;
		printf("%d\n", difference);		
	}
	else if (difference % 10 < 9){
		difference++;
		printf("%d\n", difference);
	}
	else {
		difference--;
		printf("%d\n", difference);
	}
	
	
	// if (temp==0){
	// 	printf("1");
	// 	return 0;
	// }
	// while(temp != 0){
	// 	arr[count] = temp % 10;
	// 	temp/=10;
	// 	count++;
	// }
	//printf("%d\n", count);

	// while(count!=0){
	// 	switch(count){
	// 		case 1 : if (arr[count] < 9){
	// 			difference += 1;
	// 			printf("%d\n", difference);
	// 			return 0;
	// 		}
	// 		if(arr[count]==9){
	// 			difference -= 1;
	// 			printf("%d\n", difference);
	// 			return 0;
	// 		}
	// 		break;
	// 		case 2 : if (arr[count] < 9){
	// 			difference += 10;
	// 			printf("%d\n", difference);
	// 			return 0;
	// 		}
	// 		if(arr[count]==9){
	// 			difference -= 10;
	// 			printf("%d\n", difference);
	// 			return 0;
	// 		}
	// 		break;
	// 		case 3 :if (arr[count] < 9){
	// 			difference += 100;
	// 			printf("%d\n", difference);
	// 			return 0;
	// 		}
	// 		if(arr[count]==9){
	// 			difference -= 100;
	// 			printf("%d\n", difference);
	// 			return 0;
	// 		}
	// 		break;
	// 		case 4 :if (arr[count] < 9){
	// 			difference += 1000;
	// 			printf("%d\n", difference);
	// 			return 0;
	// 		}
	// 		if(arr[count]==9){
	// 			difference -= 1000;
	// 			printf("%d\n", difference);
	// 			return 0;
	// 		}
	// 		break;
	// 	}

	// 	count--;	
	// }
	// for(int i=0;i<count;i++){
	// 	printf("%d\n",arr[i]);
	// }
	// printf("%d\n",difference);	

	return 0;
}
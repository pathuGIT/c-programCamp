#include<stdio.h>
int main(){
	int N1,N2,N3;
	printf("Enter number 1: ");
	scanf("%d",&N1);
	printf("Enter number 2: ");
	scanf("%d",&N2);
	printf("Enter number 3: ");
	scanf("%d",&N3);
	
	//exercise02_b
	/*if(N1>=N2){
		if(N1>=N3){
			printf("Maximum number is %d\n",N1);
		}else{
			printf("Maximum number is %d\n",N3);
		}
		
	}else{
		if(N2>=N3){
			printf("Maximum number is %d\n",N2);
		}else{
			printf("Maximum number is %d\n",N3);
		}
		
	}*/
	
	//exercise02_c
	if(N1>=N2 && N1>=N3){
		printf("Maximum number is %d\n",N1);
	}else if(N2>=N3 && N2>N3){
		printf("Maximum number is %d\n",N2);	
	}else{
		printf("Maximum number is %d\n",N3);
	}
	
	return 0;
		
}

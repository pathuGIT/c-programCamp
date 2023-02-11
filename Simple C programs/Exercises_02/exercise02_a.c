#include<stdio.h>
int main(){
	int N1,N2;
	printf("Enter number 1: ");
	scanf("%d",&N1);
	printf("Enter number 2: ");
	scanf("%d",&N2);
	if(N1>=N2){
		printf("Maximum number is %d\n",N1);
	}else{
		printf("Maximum number is %d\n",N2);
	}
	
	return 0;
		
}

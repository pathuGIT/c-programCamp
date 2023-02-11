#include<stdio.h>
int main(){
	int age;
	float height;
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter height in foot: ");
	scanf("%f",&height);
	if(age>18 && height>=5){
		printf("candidate is selected.\n");
	}else{
		printf("not selected.\n");
	}
	
	return 0;
		
}

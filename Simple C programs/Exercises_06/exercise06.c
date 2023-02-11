#include<stdio.h>
int main(){
    
    int unit,id;
	float proc;
	printf("Enter the customer number: ");
	scanf("%d", &id);
	printf("Enter the powe consemed: ");
	scanf("%d", &unit);
	printf("\n");

	if(unit<=200 && unit>=0){
		proc = (float)0.50*unit;
	}else if(unit<=400 && unit>=201){
		proc = (float)100+((unit-200)*0.65)	;
	}else if(unit<=600 && unit>=401){
		proc = (float)230+((unit-400)*0.80);
	}
	printf("Customer: %d\t payment:Rs.%.2f\n",id,proc );
    
	return 0;
		
}

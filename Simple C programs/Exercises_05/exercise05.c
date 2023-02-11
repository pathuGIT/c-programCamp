#include<stdio.h>
int main(){
    
    int ICT,SFT,ET,BST,ENG;
    float per;
    printf("enter marks for 5 subjects \n");
    scanf("%d %d %d %d %d", &ICT, &SFT, &ET, &BST, &ENG);
    per = (ICT + SFT + ET + BST + ENG)/5;
    printf("Percentage: %f\n",per);
    if(per>=80){
        printf("Grade: A\n");
    }else if(per>=70){
        printf("Grade: B\n");
    }else if(per>=50){
        printf("Grade: C\n");
    }else if(per>=40){
        printf("Grade: D\n");
    }else if(per>=30){
        printf("Grade: E\n");
    }else{
        printf("Grade: F\n");
    }
	return 0;
		
}

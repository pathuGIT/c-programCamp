#include<stdio.h>
int main(){
    
    float N1,N2,Sum;
    char SYM;

    printf("Enter the first number: ");
    scanf("%f", &N1);

    getchar();
    printf("Enter operator: ");
    scanf("%c", &SYM);

    if(SYM == '+'){
        printf("Enter Second number: ");
	    scanf("%f",&N2);
        Sum = N1 + N2;
        printf("Answer: %f\n",Sum);
    }else if(SYM == '-'){
        printf("Enter Second number: ");
	    scanf("%f",&N2);
        Sum = N1 - N2;
        printf("Answer: %f\n",Sum);
    }else if(SYM == '*'){
        printf("Enter Second number: ");
	    scanf("%f",&N2);
        Sum = N1 * N2;
        printf("Answer: %f\n",Sum);
    }else if(SYM == '/'){
        printf("Enter Second number: ");
	    scanf("%f",&N2);
        Sum = N1 / N2;
        printf("Answer: %f\n",Sum);
    }


    
	return 0;
		
}

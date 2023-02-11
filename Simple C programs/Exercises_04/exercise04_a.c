#include<stdio.h>
int main(){
    
    float N1,N2,Sum;
    char SYM;

    printf("Enter the first number: ");
    scanf("%f", &N1);

    getchar();
    printf("Enter operator: ");
    scanf("%c", &SYM);

    switch(SYM){
        case '+': 
            printf("Enter Second number: ");
	        scanf("%f",&N2);
            Sum = N1 + N2;
            printf("Answer: %f\n",Sum);
            break;
        case '-':
            printf("Enter second number: ");
	        scanf("%f",&N2);
            Sum = N1 - N2;
            printf("Answer: %f\n",Sum);
            break;
        case '*':
            printf("Enter second number: ");
	        scanf("%f",&N2);
            Sum = N1 * N2;
            printf("Answer: %f\n",Sum);
            break;
        case '/':
            printf("Enter second number: ");
	        scanf("%f",&N2);
            Sum = N1 / N2;
            printf("Answer: %f\n",Sum);
            break;
        default:
            printf("Not valid..\n");
            break;
    }
	return 0;
		
}

#include<stdio.h>
int main(){
    
    float value;
    int N;
    printf("Please enter the bill value: ");
    scanf("%f", &value);
    if(value>10000){
        printf("Please select a number from the raffle box: ");
        scanf("%d", &N);
        switch(N){
            case 1:
                printf("Congratulations!! You have won a Tea Set.\n");
                break;
            case 2:
                printf("Congratulations!! You have won a Spoon Set.\n");
                break;
            case 3:
                printf("Congratulations!! You have won a Non Stick Pan.\n");
                break;
            case 4:
                printf("Congratulations!! You have won a Bowl.\n");
                break;
            default:
                printf("Sorry! Not valid.\n");
                break;
        }
    }else{
        printf("You have not gift..\n");
    }

    
    
	return 0;
		
}

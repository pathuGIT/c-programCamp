#include<stdio.h>
int main(){
    char N;
    printf("\tColor Menu\n");
    printf("----------------------------\n");
    printf("Orange\n");
    printf("Brown\n");
    printf("Yellow\n");
    printf("Green\n");

    printf("Enter the first number: ");
    scanf("%c", &N);

    switch(N){
        case 'o':
            printf("Cylinder content: ammonia\n");
            break;
        case 'O':
            printf("Cylinder content: ammonia\n");
            break;
        case 'b':
            printf("Cylinder content: Carbon monoxide\n");
            break;
        case 'B':
            printf("Cylinder content: Carbon monoxide\n");
            break;
        case 'y':
            printf("Cylinder content: hydrogen\n");
            break;
        case 'Y':
            printf("Cylinder content: hydrogen\n");
            break;
        case 'g':
            printf("Cylinder content: Oxygen\n");
            break;
        case 'G':
            printf("Cylinder content: Oxygen\n");
            break;
        default:
            break;
    }
    printf("Glad to have the service\n");

    //if(N == 'O' || N == 'o' || N == 'B' || N == 'b' || N == 'y' || N == 'Y' || N == 'g' || N == 'G'){}
    
	return 0;
		
}

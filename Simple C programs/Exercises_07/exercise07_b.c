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

    if(N == 'O' || N == 'o' || N == 'B' || N == 'b' || N == 'y' || N == 'Y' || N == 'g' || N == 'G'){
        if(N=='O'||N=='o'){
            printf("Cylinder content: ammonia\n");
        }else if(N=='b'||N=='B'){
            printf("Cylinder content: Carbon monoxide\n");
        }else if(N=='y'||N=='Y'){
            printf("Cylinder content: hydrogen\n");
        }else if(N=='g'||N=='G'){
            printf("Cylinder content: Oxygen\n");
        }
    }
    printf("Glad to have the service\n");
    
	return 0;
		
}

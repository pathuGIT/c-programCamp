#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch); 
	
	if(ch>='0' && ch<='9'){
		printf("%c is not LETTER\n",ch);
	}else{
		if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z')){
			printf("%c is a LETTER\n",ch);
			if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
				printf("%c is a VOWEL\n",ch);
			}else{
				printf("%c is not a VOWEL\n",ch);
			}
		}
		
		
	}
	
	return 0;
		
}

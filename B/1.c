#include<stdio.h>
void main(){
	char c=65;
	while(c>=65){
		if(c>=65 && c<=90){
			printf("Upper case = %c\n",c);
		}
		else if(c>=97 && c<=122){
			printf("\t\t\tLower case = %c\n",c);
		}
		c++;
	}
}

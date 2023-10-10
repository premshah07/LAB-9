#include<stdio.h>
void main(){
	int n;
	float fact=1;
	printf("enter number:");
	scanf("%d",&n);
	while(n>0){
		fact=fact*n;
		n--;
	}
	printf("%0.2f",fact);
}

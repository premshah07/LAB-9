#include<stdio.h>
void main(){
	int x,y,z=1;
	printf("enter number:");
	scanf("%d",&x);
	printf("enter Power:");
	scanf("%d",&y);
	while(y!=0){
		z=z*x;
		y--;
	}
	printf("%d",z);
}

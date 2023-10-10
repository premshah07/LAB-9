#include<stdio.h>
void main(){
	int n,i=1;
	printf("enter number:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			printf("factors=%d\n",i);
		}
		i++;
	}
}

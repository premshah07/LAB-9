#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			sum=sum-i;
		}
		else{
			sum=sum+i;
		}
		i++;
	}
	printf("sum=%d",sum);
}

#include<stdio.h>
#include<stdlib.h>


int main(){
	int a[10];
	int length;
	int sum=0;
	printf("Enter the length");
	scanf("%d",&length);
	printf("Enter the values");
	for(int i=0;i<length;++i){
		scanf("%d",a+i);
		sum+=a[i];
	}
	printf("The sum is %d \n",sum);
	for(int i=2;i<sum/2;++i){
		if(sum%i==0){
			printf("Sum is not prime\n");
			return 0;
		}
	}
	printf("Sum is prime\n");

	return 0;
}
#include<stdio.h>
#include<stdlib.h>


int main(){
	char a[10];
	int length;
	printf("Enter the length");
	scanf("%d",&length);
	printf("Enter the values");
	for(int i=0;i<=length;++i){
		scanf("%c",&a[i]);
	}
	for(int i=0;i<=length/2;++i){
		char temp;
		temp=a[length-i-1];
		a[length-1-i]=a[i];
		a[i]=temp;
	}
	for(int i=0;i<=length;++i){
		printf("%c",a[i]);
	}
	
	return 0;
}
#include<stdio.h>
#include<stdlib.h>


int main(){
	int a[10];
	int length;
	printf("Enter the length");
	scanf("%d",&length);
	printf("Enter the values");
	for(int i=0;i<length;++i){
		scanf("%d",a+i);
	}
	

	for(int i=0;i<length-1;++i){
		for(int j=0;j<length-i-1;++j){
			if(a[j]>a[j+1]){
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array\n");
	for(int i=0;i<length;++i){
		printf("%d ",a[i]);
	}
	return 0;
}
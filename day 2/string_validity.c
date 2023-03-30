#include<stdio.h>
#include<stdlib.h>


int main(){	
	char a[10];
	int length=0;
	int hash=0,star=0;
	printf("Enter the String\n");
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++){
		if(a[i]=='#')hash++;
		else if(a[i]=='*')star++;
		else {
			printf("Invalid String");
			return 1;
		}
		length++;
	}
	int i;

	printf("%s",a);
	if(hash>star){
		for(i=0;i<(hash-star);++i){
			a[length-1+i]='*';
		}
		
	}


	if(hash<star){
		for(i=0;i<(star-hash);++i){
			a[length-1-i]='#';
		}
		
	}
	printf("\nThe values is %d",(hash-star));
	
	return 0;
}
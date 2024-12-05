#include <stdio.h>
#include <string.h>
void main(){
	int r=4,c=100;
	char temp[100];
	char arr[r][c];
	for(int i=0;i<r;i++){
		printf("Enter first string:");
		gets(arr[i]);
	}
	for(int i=0;i<r-1;i++){
		for(int j=0;j<r-i-1;j++){
			if(strcmp(arr[j],arr[j+1])>0){
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);
			}
		}
	}
	printf("The sorted list is \n");
	for(int i=0;i<r;i++){
		puts(arr[i]);
		printf("\n");
	}
	
}

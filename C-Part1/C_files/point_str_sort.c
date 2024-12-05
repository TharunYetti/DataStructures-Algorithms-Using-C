//sorting an strnig using pointer and function
#include <stdio.h>
#include <string.h>
void sort(int *r,int *c,char *arr[*r][*c]){
	char temp[1000];
	for(int i=0;i<(*r-1);i++){
		for(int j=0;j<(*r-i-1);j++){
			if(strcmp(arr[j],arr[j+1])>0){
				strcpy(temp,arr[j]);
				strcpy(arr[j],arr[j+1]);
				strcpy(arr[j+1],temp);
			}
		}
	}
	printf("The sorted list is \n");
	for(int i=0;i<(*r);i++)
		puts(arr[i]);
}
void main(){
	printf("Enter how many strings do you want to enter:");
	int r,c=100;
	scanf("%d",&r);
	char *arr[r][c];
	for(int i=0;i<r;i++)
		scanf("%s",arr[i]);
	sort(&r,&c,arr);
}

//sorting an strnig using pointer and function
#include <stdio.h>
#include <string.h>
void sort(int *r,int *c,char ch[*r][*c]){
	char temp[*c];
	for(int i=0;i<*r-1;i++){
		for(int j=0;j<*r-i-1;j++){
			if(strcmp(ch[j],ch[j+1])>0){
				strcpy(temp,ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],temp);
			}
		}
	}
	for(int i=0;i<*r;i++){
		puts(ch[i]);
	}
}
void main(){
	printf("Enter how many strings do you want to enter:");
	int n,c=100;
	scanf("%d",&n);
	char arr[n][c];
	for(int i=0;i<n;i++){
		//printf("Enter string:");
		scanf("%s",arr[i]);
	}
	sort(&n,&c,arr);
}

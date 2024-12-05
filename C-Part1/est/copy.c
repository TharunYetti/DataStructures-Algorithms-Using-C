#include <stdio.h>
void copy(char new[],char a[],int b){
	if(a[b]!=0){
		new[b]=a[b];
		copy(new,a,b+1);
	}
	else
		puts(new);
}
void main(){
	printf("Enter a name:");
	char name[100],new[100];
	scanf("%s",name);
	copy(new,name,0);
}

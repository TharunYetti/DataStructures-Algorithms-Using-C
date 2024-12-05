#include <stdio.h>
int size(char a[],int i){
	if(a[i]!=0)
		return 1+size(a,i+1);
	return 0;
}
void main(){
	printf("ENter a text:");
	char ch[100];
	scanf("%s",ch);
	printf("%d\n",size(ch,0));
}

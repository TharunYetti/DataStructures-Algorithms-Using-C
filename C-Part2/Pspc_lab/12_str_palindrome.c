#include <stdio.h>
#include <string.h>
void main(){
	printf("ENter a string:");
	char str[1000];
	scanf("%s",str);
	int n=strlen(str),mid=n/2,isorder=0;
	for(int i=0;i<=mid;i++){
		if(str[i]==str[n-i-1])
			isorder++;
	}
	if(isorder>=mid)
		printf("Plaindorme\n");
	else
		printf("NOt a Plaindrome\n");
}

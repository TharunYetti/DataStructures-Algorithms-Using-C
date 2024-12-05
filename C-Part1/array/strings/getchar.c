#include <stdio.h>
void main(){
	int i,n;
	printf("Enter how many character of ");
	scanf("%d",&n);
	char ch[n];
	//printf("Enter %d character",n);
	//ch[0]='\0';
	for(i=0;i<n-1;i++){
		getchar();
		ch[i]=getchar();
	}
	ch[n-1]=0;
	printf("Your entered character are ");
	//for(i=0;i<=n;i++)
	//	putchar(ch[i]);
	puts(ch);
}

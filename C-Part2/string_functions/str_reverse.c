//stringlen,concatenation,comaparision,copy ,reverse
#include <stdio.h>
void main(){
	char str[10]="ABCDEFGHIJ",n=10;
	int temp;
	int start=0,end=n-1;
	while(end!=(n/2-1)){
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	for(int i=0;i<n;i++)
		putchar(str[i]);
	puts(str);
	printf("\n");
}

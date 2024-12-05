//2D array practice
#include <stdio.h>
void main(){
	int x[2][2]={{0,1},{2,3}};
	int *p=x;
	printf("%u\n",x);
	printf("%u\n",*(p+1+1) );
	
}

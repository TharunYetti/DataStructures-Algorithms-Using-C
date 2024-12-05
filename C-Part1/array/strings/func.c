#include <stdio.h>
void main(){
	int add(int,int);
	int x=20,y=40;
	printf("The sum is %d\n",add(x,y));
}
int add(int a,int b){
	return a+b;
}

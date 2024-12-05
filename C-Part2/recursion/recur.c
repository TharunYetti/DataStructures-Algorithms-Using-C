#include <stdio.h>
void fun(int);
void fun2(int);
int mult(int,int);
void main(){
	int x=3,a=2,b=3;
	printf("%d\n",mult(a,b));
	fun(x);
	
}
void fun(int a){
	if(a==1)
		return 1;
	else{
		fun(a-1);
		printf("%d\n",a);
	}
}
void fun2(int x){
	if(x>0){
		fun2(x-1);
		printf("%d\n",x);
		fun2(x-1);
	}
}
int mult(int a,int b){
	if(b==1)
		return a;
	else
		return  a + mult(a,b-1);
}

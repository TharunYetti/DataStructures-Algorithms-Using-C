#include <stdio.h>
int lcm(int,int);
void main(){
	int a,b;
	printf("Enter two umber to find the lcm with a space between:");
	scanf("%d %d",&a,&b);
	printf("The lcm of the Two numbers is %d\n",lcm(a,b));
}
int lcm(int a,int b){
	int lcm,gcd;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0)
			gcd=i;
	}
	lcm=(a*b)/gcd;
	return lcm;
}

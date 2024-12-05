#include <stdio.h>
#include <math.h>
int fact(int);
void main(){
	float x,k,term1,sinsum=0;
	printf("Enter a number x to find sin(x) value:");
	scanf("%f",&x);
	x=x*(3.1415/180);
	for(int i=1;i<=10;i++){
		k=i+(i-1);
		term1=pow(x,k)/fact(k);
		if(i%2==0)
			sinsum=sinsum-term1;
		else
			sinsum=sinsum+term1;
		printf("\nSum is %f\n",sinsum);
	}
	printf("The value of sin x approximation upto 10 terms is %f\n",sinsum);
}
int fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}

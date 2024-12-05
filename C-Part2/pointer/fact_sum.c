//find the factorial of number and find the sum of numbersbetween1 to n
#include <stdio.h>
void main(){
	int n,sum=0,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	int *p=&n,*qsum=&sum,*rfact=&fact;
	for(int i=(*p);i>0;i--){
		(*rfact)*=i;
		(*qsum)+=i;
	}
	printf("The factorial is %d\nThe sum of numbesrs between 1 to %d is %d\n",*rfact,*p,*qsum);
	
} 

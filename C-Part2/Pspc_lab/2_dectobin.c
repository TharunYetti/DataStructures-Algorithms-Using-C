#include <stdio.h>
#include <math.h>
void  main(){
	printf("ENter the decimal number:");
	int num,bin=0,dig,exp=0;
	scanf("%d",&num);
	while(num!=0){
		dig=num%2;
		bin+=dig*pow(10,exp);
		exp++;
		num=num/2;
	}
	printf("%d\n",bin);
}

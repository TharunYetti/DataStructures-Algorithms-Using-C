#include <stdio.h>
void main(){
	struct tharun{
		int w;
		int h;
	}mem1,mem2;
	printf("Enter your weight and height with a space between:");
	scanf("%d %d",&mem1.w,&mem1.h);
	printf("The height of mem1 is %d and weight is %d\n",mem1.h,mem1.w);
	
}

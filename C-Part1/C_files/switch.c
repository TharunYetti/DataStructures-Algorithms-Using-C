#include <stdio.h>
int a=3,b=7,sum;
void main()
{
	sum=a+b;
	switch(sum)
	{
		case 10: printf("Ten\n");break;
		case 9: printf("Nine\n");break;
		case 8: printf("Eight\n");break;
		default: printf("OK\n");
	}
}

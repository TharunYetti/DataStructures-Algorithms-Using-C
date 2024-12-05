#include <stdio.h>
int a;
int rnum;
//int d;
//int temp;
void main()
{
	printf("Enter a number you want to check if it is palindrome:\n>>>");
	scanf("%d",&a);
	int temp=a;
	while(a>0)
	{
		int d=a%10;
		rnum=rnum*10+d;
		a=a/10;
	}
	if(temp==rnum)
	{
		printf("It's a Palindrome.\n");
	}
	else
	{
		printf("Not a Palindrome.\n");
	}
}

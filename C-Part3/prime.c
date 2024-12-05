#include <stdio.h>
int start=0;
int end;
int main()
{
	printf("Enter a number:\n>>>");
	scanf("%d",&end);
	for(int i=start;i<=end;i++)
	{
		int count=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%d ",i);
		}
	}
}

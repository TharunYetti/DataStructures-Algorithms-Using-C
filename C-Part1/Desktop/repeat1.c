#include <stdio.h>
void repeat(int i,int a)
{
	int j;
	if(i>a)
		return;
	for(j=1;j<=i;j++)
	{
		printf("%d",7);
	}
	printf(",");
	i++;
	repeat(i,a);
}
void main()
{
	int i=1,a;
	printf("Enter the Number of terms:");
	scanf("%d",&a);
	printf("Required Sequence:");
	repeat(i,a);
}

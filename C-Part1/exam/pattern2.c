#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the no of rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(j>i)
                printf(" ");
            else
                if(i==j || j==1 || i==n)
                    printf("*");
                else
                    printf("-");
        }
        printf("\n");
    }

}

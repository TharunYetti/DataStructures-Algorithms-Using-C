#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the no of rows:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        
            if(j<=n-i)
                printf("* ");
            else
                if(i<n)
                    printf("- ");
        }
        printf("\n");
    }

}
#include<stdio.h>
void main()
{
    int a[20];
    int i,j,size,max,mx,min,mn;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements in the array are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            mn=i;
        }
        if(max<a[i])
        {
            max=a[i];
            mx=i;
        }
    }
    printf("\nThe min and max are:%d,%d",min,max);
    if(max>min)
    {
        a[mn]=max;
        a[mx]=min;
    }

    printf("\nThe elements in the array are:");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

}
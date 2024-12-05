#include<stdio.h>
void main()
{
    int arr[20];
    int i,j,k,size;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are:");
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }


    printf("\nThe second largest element of the array is:%d",arr[size-2]);
    printf("\nThe second smallest element of the array s:%d\n",arr[1]);
}
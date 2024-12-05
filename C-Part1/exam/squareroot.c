#include<stdio.h>
#include<math.h>
void main()
{
    int a,n=3,i=1;
    start:
        printf("Enter the number:");
        scanf("%d",&a);
        printf("The squareroot of %d is %f \n",a,sqrt(a));
        i++;
    if(i<=n)
    {  
        
        goto start;
    }
    


}

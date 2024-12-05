#include <stdio.h>
void main(){
	/*int x[]={1,2,3,4,5,120};
	int *p=(&x+1);
	printf("%d\n",x);
	printf("%d\n",p);
	printf("%d\n",*(p-1));
	printf("The size of the array is %d\n",p-x);
	*/
	printf("Enter how many numbers do you want to enter:");
	int n;
	scanf("%d",&n);
	int arr[]={1,2,4,123,7,5,3,4,7,23,6,0,2,6,32,6,2,5,62,8};
	//for(int i=0;i<n;i++){
	//	printf("ENter a number:");
	//	scanf("%d",&arr[0]);
	//}
	int *parr=&arr+1;
	printf("The size of the array is %d\n",parr-arr);
}

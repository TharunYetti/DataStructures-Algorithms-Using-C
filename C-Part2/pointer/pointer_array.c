#include <stdio.h>
void main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0},k;
	int* p,q;
	p=arr;//takes base address of array
	k=p+*(p+7)-(p+1); //first example
	printf("%d\n",k);
	/*for(int i=0;i<10;i++){
		printf("Element %d is %d\n",i+1,*(p+i));
		printf("The adrres of element %d is %d\n",i+1,p+i);
	}*/
}

#include <stdio.h>
void main(){
	int n;
	printf("Enter a how manh elements do youw want:");
	scanf("%d",&n);
	int a[n],temp;
	for(int i=0;i<n;i++){
		printf("ebter element %d",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<(n-1);i++){
		for(int j=0;j<(n-1-i);j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}
	}
	printf("The aray is sorted first.\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	int low=0,high=n-1,find,isfound=0;
	printf("Enter a element to search:");
	scanf("%d",&find);
	int k=0;
	while(low<=high){
		int mid=low+high/2;
		if(a[mid+k]==find && k<n){
			printf("FOudn at %d\n",mid+k);
			isfound=1;
			k++;
			//break;
		}
		else if(a[mid]>find)
			high=mid-1;
		else
			low=mid+1;
	}
	if(isfound==0)
		printf("Not found\n");
}

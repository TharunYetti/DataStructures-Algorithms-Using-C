//insertion sorting method
#include <stdio.h>
#include<time.h>
#include <stdlib.h>
void main(){
	clock_t start, end;
	int array[5]={10,20,30,40,50},n=5,key;
	start = clock();
	for(int i=1;i<n;i++){//we need (n-1) interations to sort n elements bcz we fix the intial value assuming it is in sorted order itself
		key=array[i];
		int j=i-1;
		for(;j>=0 && array[j]>key;j--){
			array[j+1]=array[j];
		}
		array[j+1]=key;
	}
	end = clock();
	double t1 = ((double)(end-start)) / CLOCKS_PER_SEC;
	printf("TIME 1: %lf\n",t1);
	for(int k=0;k<n;k++){
		printf("%d\n",array[k]);
	}
	int a[5]={10,20,30,40,50},size=5,flag=0;
	start = clock();
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag++;
			}
		}
		if(flag==0){
			printf("Already in sorted order\n");
			break;
		}
	}
	end = clock();
	double t2 = ((double)(end-start)) / CLOCKS_PER_SEC;
	printf("TIME 2: %lf\n",t2);
	
}

//Revrse the elemets of 10 integers nyn using recursion 
#include <stdio.h>
void rever(int[],int,int,int);
void print(int[],int);
void main(){
	int arr[11]={10,20,30,40,50,60,70,80,90,100,110},n=11;
	printf("Intial array is\n");
	print(arr,n);
	printf("Finally reversed array is\n");
	rever(arr,n,0,n-1);
}
void rever(int a[],int n,int start,int end){
	int temp;
	temp=a[start];
	a[start]=a[end];
	a[end]=temp;
	if(end!=(n/2))
		rever(a,n,start+1,end-1);
	else
		print(a,n);
}
void print(int a[],int n){
	for(int i=0;i<n;i++)
		printf("%d,",a[i]);
	printf("\b \n");
}

//sacnning and printing an array
/*
#include <stdio.h>
int a[5];
void main(){
	int i;
	printf("Enter your marks in four subjects:");
	for(i=0;i<=5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++){
		printf("%d ",a[i]);
	}
}

//scanning an array and finiding the sum

#include <stdio.h>
int a[5];
void main(){
	printf("Enter the marks of five subjects:");
	int i;
	float sum,avg;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+a[i];
	}
	printf("The sum of five subjects is %f\n",sum);
	avg=sum/5;
	printf("The avg of five subjects is %f",avg);
}

//finding minimum and maximum in an array

#include <stdio.h>
int a[5]={2,4,7,2,5};
int min,max;
void main(){
	min=a[0];
	max=a[0];
	for(int i=0;i<5;i++){
		if(a[i]<=min){
			min=a[i];
		}
		else if(a[i]>=max){
			max=a[i];
		}
	}
	printf("The max is %d and the min is %d",max,min);
}

//reversing the array

#include <stdio.h>
int a[5]={1,2,3,4,5},b[5];
void main(){
	for(int i=0;i<5;i++){
		b[4-i]=a[i];
	}
	printf("THe new reversed array is { ");
	for(int i=0;i<5;i++){
		printf("%d ",b[i]);
	}
	printf("}\n");
}

//occurence of given integer in our array

#include <stdio.h>
int a[10]={1,2,4,2,7,2,6,3,4,5};
void main(){
	int num,count=0;
	printf("Enter an integer between the range 1-7:");
	scanf("%d",&num);
	for(int i=0;i<10;i++){
		if(a[i]==num){
			count+=1;
		}
	}
	printf("THe count of %d in given array is %d\n",num,count);
}
*/
//sorting the array

WRONG............WRONG............
#include <stdio.h>
int a[10]={1,2,4,2,7,2,6,3,4,5},b[10],inter[10]={1,2,4,2,7,2,6,3,4,5};
void main(){
	for(int k=0;k<10;k++){
		int min=inter[0];
		for(int i=0;i<10;i++){
			if(a[i]<=min){
				min=a[i];
			}
		}
		b[k]=min;
		for(int j=0;j<10;j++){
			if(a[j]!=min){
				inter[j]=a[j];
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
}






























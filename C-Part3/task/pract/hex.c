//decimal to hexadecimal
#include <stdio.h>
void main(){
	int num,dig;
	printf("Enter a decimal number:");
	scanf("%d",&num);
	int arr[10000],index=0;
	while(num!=0){
		dig=num%16;
		arr[index]=dig;
		num/=16;
		index++;
	}
	printf("Hexadecimal value is ");
	for(int i=index-1;i>=0;i--){
		if(arr[i]==10)
			printf("%c",'A');
		else if(arr[i]==11)
			printf("%c",'B');
		else if(arr[i]==12)
			printf("%c",'C');
		else if(arr[i]==13)
			printf("%c",'D');
		else if(arr[i]==14)
			printf("%c",'E');
		else if(arr[i]==15)
			printf("%c",'F');
		else
			printf("%d",arr[i]);
	}
	printf("\n");
}
/*
int num=64,a[64],dig,index=0;
	while(num!=0){
		dig=num%16;
		a[index]=dig;
		num/=16;
		index++;
	}
	printf("Hex is\n");
	for(int i=63;i>0;i--){
		if(a[i]>=0 && a[i]<=15)
			printf("%d\t",a[i]);
	}
	printf("\n%d\t",a[1]);
	printf("%d\t",a[0]);
}
*/

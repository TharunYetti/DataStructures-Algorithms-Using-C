//printing first/middle/last n characters
#include <stdio.h>
#include <string.h>
void firstchar(char a[],int);
void middlechar(char a[],int);
void lastchar(char a[],int);
void main(){
	int n=20;
	char str[20]="APJ ABDUL KALAM";
	printf("The string is %s\n",str);
	firstchar(str,n);
	middlechar(str,n);
	lastchar(str,n);
}
void firstchar(char a[],int n){
	int num,i;
	printf("ENter upto how many first elements do you want to print(0-15):");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("%c",a[i]);
	}
	printf("\n");
}
void middlechar(char a[],int n){
	int start,end,i;
	printf("Enter from which address to which address do you want,with a space between in range(0,15):");
	scanf("%d %d",&start,&end);
	for(i=start;i<=end;i++){
		printf("%c",a[i]);
	}
	printf("\n");
	
}
void lastchar(char a[],int n){
	int num,i,start;
	printf("Enter how many last elements do you want to print(0-15):");
	scanf("%d",&num);
	start=strlen(a)-num;
	for(i=start;i<strlen(a);i++){
		printf("%c",a[i]);
	}
	printf("\n");
}

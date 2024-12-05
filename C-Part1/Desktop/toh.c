/*
//google copy
#include <stdio.h>
#include <stdlib.h>
void toH(int n, char rodA, char rodC, char rodB){
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c",rodA ,rodC );
		return;
	}
	toH(n-1, rodA, rodB, rodC);
	printf("\n Move disk %d from rod %c to rod %c", n, rodA, rodC);
	toH(n-1, rodB, rodC,rodA);
}

int main()
{
	int no_of_disks ;
	printf("Enter number of disks: ");
	scanf("%d", &no_of_disks);
	toH(no_of_disks, 'A','C','B'); 
	return 0;
}
*/
//using recursion
#include <stdio.h>
//#include <conio.h>
void hanoi(char,char,char,int);
void main()
{
	int num;
	//clrscr();
	printf("\nENTER NUMBER OF DISKS: ");
	scanf("%d",&num);
	printf("\nTOWER OF HANOI FOR %d NUMBER OF DISKS:\n", num);
	hanoi('A','B','C',num);
	getchar();
}
void hanoi(char A,char B,char C,int n)
{
	if(n<=0)
		printf("ILLEGAL NUMBER OF DISKS\n");
	if(n==1)
		printf("MOVE DISK FROM %c TO %c\n",A,C);
	if(n>1)
	{
		hanoi(A,C,B,n-1);
		hanoi(A,B,C,1);
		hanoi(B,A,C,n-1);
	}
}

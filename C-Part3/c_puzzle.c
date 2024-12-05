//take postive integer input and output the largest orume number less than or equal to that input and print 'no prime numbers' if the number is less than 2 
#include <stdio.h>
#include <stdlib.h>
void main(){
	int inp;
	printf("Enter a number:");
	scanf("%d",&inp);
	if(inp<2){
		printf("NO prime numbers\n");
		exit(1);
	}
	else{
		int l_prime=2;
		for(int i=2;i<=inp;i++){
			int count=0;
			for(int j=1;j<=i;j++){
				if(i%j==0)
					count++;
			}
			if(count==2)
				l_prime=i;
		}
		printf("The largest prime number between the range is %d\n",l_prime);
	}
	
}

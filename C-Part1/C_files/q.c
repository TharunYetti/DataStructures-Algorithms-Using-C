#include <stdio.h>
int gcd(int a,int b,int i){
	int ans;
	if(a%i==0 && b%i==0)
		ans=i;
	if(i<a && i<b)
		gcd(a,b,i+1);
	else
		return ans;
}
void main(){
	printf("%d",gcd(5,25,1));
}

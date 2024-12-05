#include <stdio.h>
int a=10,b=5,c=2;
int x=8,y=4,z=1;
int j,k,l,m;
void main(){
	j= (a++ * b % c > a+ --b && c<<2) || ( (a/b*c) >>2 || !(b>>1) + c ) ;
	printf("%d \n",j);
	
	k= ( x * y % z >> 2 + x || x^2 ) && ( x&y << 2 * ++y % 2 || !(10<<z + ++z) );
	printf("%d \n",k);
	
	l= ( a+ --b >> 2 || (a/b*c) >>2 ) != ( --a % b * c && !(b>>1) << 10) ;
	printf("%d \n",l);
	
	m= ( y % z >> 2 + x && x&y << 2 ) % ( x<<2 || x^2 && !(10<<z + ++z) ) ;
	printf("%d \n",m);
}

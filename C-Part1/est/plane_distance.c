#include <stdio.h>
#include <math.h>
typedef struct plane{
	float x;
	float y;
}point;
void main(){
	point a,b;
	printf("Enter the x and y values :");
	scanf("%d %d",&a.x,&a.y);
	printf("Enter the x and y values :");
	scanf("%d %d",&b.x,&b.y);
	double c;
	c=sqrt( (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y) );
	printf("The distance is %.2lf\n",c);
}

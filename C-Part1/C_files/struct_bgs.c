#include <stdio.h>
struct hello{
	int age;
	float w;
};
void main(){
	struct hello n1={20,34.5},n2={12,90.8},*ptr1,*ptr2;
	ptr1=&n1;
	ptr2=&n2;
	printf("The age of second person is %f\n",n1.w);
}

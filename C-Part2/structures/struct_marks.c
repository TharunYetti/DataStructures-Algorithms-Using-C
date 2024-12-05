//display total marks student wise and subject wise
#include <stdio.h>
void main(){
	struct student{
		int sub1;
		int sub2;
		int sub3;
	};
	//printf("Enter marks of three of three students:")
	struct student marks[3]={{20,30,40},{50,60,70},{80,90,100}};
	struct student total={0,0,0};
	for(int i=0;i<3;i++){
		total.sub1+=marks[i].sub1;
		total.sub2+=marks[i].sub2;
		total.sub3+=marks[i].sub3;
	}
	struct{
		int st1;
		int st2;
		int st3;
	}student={0,0,0};
	student.st1+=marks[0].sub1+marks[0].sub2+marks[0].sub3;
	student.st2+=marks[1].sub1+marks[1].sub2+marks[1].sub3;
	student.st3+=marks[2].sub1+marks[2].sub2+marks[2].sub3;
	printf("The sum of Sub1 is %d\n",total.sub1);
	printf("The sum of Sub2 is %d\n",total.sub2);
	printf("The sum of Sub3 is %d\n",total.sub3);
	printf("The sum of Student1 is %d\n",student.st1);
	printf("The sum of Student2 is %d\n",student.st2);
	printf("The sum of Student3 is %d\n",student.st3);
}

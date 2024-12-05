#include<stdio.h>

int main()
{
    int marks[10];
    long int phno[15];
    int sum,i,j,grade;
    float avg;
    char name[20],id[10],branch[10];

    for(i=0;i<10;i++)
    {
        
        printf("Enter name of student%d:",i+1);
        scanf("%s",name);
        printf("Enter Your id:");
        scanf("%s",id);
        printf("Enter Your branch(cse=c,ece=e...):");
        scanf("%s",branch);
        printf("Enter Your phone number:");
        scanf("%ld",&phno[i]);
        sum=0;
        for(j=0;j<6;j++){
            printf("Enter your subject%d marks:",j+1);
            scanf("%d",&marks[j]);
            sum+=marks[j];
        }
        avg=(float)sum/6;
        grade=avg/10;
        
        printf("Name: %s\n",name);
        printf("Id: %s\n",id);
        printf("Phone number: %ld\n",phno[i]);
        printf("Your branch: %s\n",branch);

        switch(grade)
        {
            case 10:
            case 9:
                printf("Your grade is Ex\n");
                break;
            case 8:
                printf("Your grade is A\n");
                break;
            case 7:
                printf("Your grade is B\n");
                break;
            case 6:
                printf("Your grade is C\n");
                break;
            case 5:
                printf("Your grade is D\n");
                break;
            default:
                printf("Sorry,You are failed!!\n");
        }
    }
    
    return 0;
}

#include<stdio.h>
struct student
{
	char name[20];
	int roll_no;	
	int marks;
};
int main(void)
{
	struct student s1,s2;
	int per1,per2;
	printf("Enter details of first student 'Name,roll_no,marks':");
	scanf("%s%d%d",&s1.name,&s1.roll_no,&s1.marks);
	printf("\nEnter details of second student 'Name,roll_no,marks':");
	scanf("%s%d%d",&s2.name,&s2.roll_no,&s2.marks);
	per1=(s1.marks*100)/500;
	per2=(s2.marks*100)/500;
	printf("First student:\nName:%s\nRoll_no:%d\nMarks:%d\nPercentage:%d",s1.name,s1.roll_no,s1.marks,per1);
	printf("\nSecond student:\nName:%s\nRoll_no:%d\nMarks:%d\nPercentage:%d",s2.name,s2.roll_no,s2.marks,per2);
}

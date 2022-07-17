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
	printf("Enter details of first student 'Name,roll_no,marks':");
	scanf("%s%d%d",&s1.name,&s1.roll_no,&s1.marks);
	printf("\nEnter details of second student 'Name,roll_no,marks':");
	scanf("%s%d%d",&s2.name,&s2.roll_no,&s2.marks);
	printf("First student:\nName:%s\nRoll_no:%d\nMarks:%d",s1.name,s1.roll_no,s1.marks);
	printf("\nSecond student:\nName:%s\nRoll_no:%d\nMarks:%d",s2.name,s2.roll_no,s2.marks);
}

//Write a program in C to store student information such as roll no, name, and marks. Using union
#include<stdio.h>
union student
{
	char name[20];
	int roll_no,marks;
};
int main(void)
{
	union student s;
	printf("Enter name of student:");
	scanf("%s",&s.name);
	printf("\nName:%s",s.name);
	printf("\nEnter roll_no:");
	scanf("%d",&s.roll_no);
	printf("\nRoll_no:%d",s.roll_no);
	printf("\nEnter marks:");
	scanf("%d",&s.marks);
	printf("\nMarks:%d",s.name);
}

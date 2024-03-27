#include<stdio.h>
#include<stdlib.h>
struct student 
{
	char name[50];
	int rollNo;
	int class;
	double MobileNo;
	char section;
};
int main()
{
	struct student s;
	int n;
	for(int i=1;i<n;i++)
		{
			printf("Enter Number of students:");
			scanf("%d",&n);
		}
	for(int i=1;i<n;i++)
	{
		printf("Enter the Name of Student : \n");
		scanf("%d",&s.name);
		printf("Enter the Roll Number :\n");
		scanf("%d",&s.rollNo);
		printf("Enter class of student \n");
		scanf("%d",&s.class);
		printf("Enter Mobile Number of Student :\n");
		scanf("%0.2f",&s.MobileNo);

		printf("Enter the section of student : \n");
		scanf("%d",&s.section);

	}
	printf("Displaying Record of student \n");

	printf("Name %s \n",s.name);
	printf("Roll Number %d \n",s.rollNo);
	printf("Class %d \n",s.class);
	printf("Mobile Number %0.2f \n",s.MobileNo);
	printf("Section %s \n",s.section);

	return 0;
}	
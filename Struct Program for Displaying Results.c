//Author : Vishvesh Modcoicar
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    char name[100];
    int roll, marks, age;
};
typedef struct student student;

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    student *st=malloc(n* sizeof(student));
    for(int i=1;i<=n;i++)
    {
        printf("Enter Student %d's Name: ",i);
        scanf("%s",&st[i].name);
        printf("Enter Student %d's Age: ",i);
        scanf("%d",&st[i].age);
        printf("Enter Student %d's Marks: ",i);
        scanf("%d",&st[i].marks);
    }
    printf("------------------\n");
    printf("Displaying Result: \n");
    printf("------------------\n");
    for(int i=1;i<=n;i++)
    {
        printf("Student %d:\n",i);
        printf("Name: ");
        puts(st[i].name);
        printf("Age: %d\n",st[i].age);
        printf("Marks: %d\n",st[i].marks);
	printf("------------------\n");
    }
    return 0;
}
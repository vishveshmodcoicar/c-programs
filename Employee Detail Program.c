//Author : Vishvesh Modcoicar
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
	char name[100], last_name[100];
	char designation[20], designation2[20];
	char gender[2];
	int salary;
	int dj_day,dj_month,dj_year;
};
void display (struct employee em) //Displaying employee details
{
	printf("Name: ");
	puts(em.name);
	printf("Gender: %s\n",em.gender);
	printf("Designation: ");
	puts(em.designation);
	printf("Salary: %d\n",em.salary);
	printf("Date of joining: %d/%d/%d\n",em.dj_day,em.dj_month,em.dj_year);
}
int main()
{
	char sp[] ={' '};
	struct employee emp[100];
	int count=0;
	int ch=1;
	while(ch!=0)
	{
        	printf("Employee %d: \n",count+1);
        	printf("Enter first name: ");
        	scanf("%s",emp[count].name);
        	strcat(emp[count].name,sp);
        	printf("Enter last name: ");
        	scanf("%s",emp[count].last_name);
        	strcat(emp[count].name,emp[count].last_name);
        	printf("Enter Gender (F-> Female, M-> Male): ");
        	scanf("%s", &emp[count].gender);
        	printf("Enter Designation (2 words): ");
        	scanf("%s",&emp[count].designation);
        	strcat(emp[count].designation, sp);
        	scanf("%s",&emp[count].designation2);
        	strcat(emp[count].designation, emp[count].designation2);
        	printf("Enter Salary: ");
        	scanf("%d",&emp[count].salary);
        	printf("Enter date of joining (in format DD MM YYYY): ");
        	scanf("%d%d%d", &emp[count].dj_day,&emp[count].dj_month,&emp[count].dj_year);
        	printf("Enter '0' to exit the loop: ");
        	scanf("%d",&ch);
        	count++;
	}
	printf("\n----------------------\n");
	printf("Displaying Information\n");
	printf("----------------------\n");
	printf("No. of employees= %d\n",count);
	int male=0,female=0;
	for(int i=0;i<count;i++)
	{
        	if(strcmp(emp[i].gender,"M")==0 || strcmp(emp[i].gender,"m")==0)
        		++male;
        	else if(strcmp(emp[i].gender,"F")==0 || strcmp(emp[i].gender,"f")==0)
        		++female;
	}
	printf("No.of males= %d\n",male);
	printf("No.of females= %d\n",female);
	printf("Employees with salary more than 10,000: \n");
	for(int i=0;i<count;i++)
	{
        	if(emp[i].salary>10000)
        	{
        		printf("---------------\n");
        		printf("Employee No. %d\n",i+1);
        		display(emp[i]);
        	}
	}
	
	printf("-------THE END--------\n");
	return 0;
}

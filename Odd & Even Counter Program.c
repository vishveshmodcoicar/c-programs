//Author : Vishvesh Modcoicar
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc < 2){
		printf("Error");
		return -1;
	}
	int n=atoi(argv[1]);
	int a[100];
	int count = 0;	
	printf("Enter the %d integers: ",n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\nEven numbers: ");
	for(int i=1;i<=n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d",a[i]);
			count++;
		}
	}
	if(count==0)
		printf("\nNo Even numbers.");
	count=0;
	printf("\nOdd numbers: ");
	for(int i=1;i<=n;i++)
	{
		if(a[i]%2!=0)
		{
			printf("\n%d",a[i]);
			count++;
		}
	}
	if(count==0){
		printf("\nNo Odd numbers.");
	printf("\nThe End.");
	}
	return 0;

}

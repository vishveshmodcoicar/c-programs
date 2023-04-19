#include<stdio.h>
#include<math.h>
#include <stdlib.h>
void main(int argc,char *argv[])
{
	int a[100];
	int n=atoi(argv[1]);
	
	for(int i=0;i<n;i++)
	{
		printf("Enter The Digit No. %d (from the left side): ",i+1);
		scanf("%d",&a[i]);
	}
	int j=0,sum=0;
	for(int i=n-1;i>=0;i--)
	{
		sum+=a[i]* pow(2,j);
		j++;
    	}
	printf("The Decimal Value Is %d ",sum);
}

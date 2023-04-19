#include<stdio.h>
void main()
{
	int n,re=0,remainder;
	printf("Enter An Integer: ");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		re= re*10+remainder;
		n/=10;
	}
	printf("The reverse integer is %d ",re);
}

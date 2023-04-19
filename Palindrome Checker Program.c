#include<stdio.h>
#include<string.h>
int strlength(char st[100]) //String length
{
	int count=0;
	for(int i=0;st[i]!='\0';i++)
		count++;
	printf("The Length Of String Is %d\n",count);
	return 0;
}

int str_palincheck(char st[100]) //Palindrome check
{
	int n=strlen(st);
	for(int i=0;i<=n/2;i++)
	{
		if(st[i]!=st[n-i-1])
		{
			printf("The String %s Is Not A Palindrome.\n",st);
			goto l;
		}
	}
	printf("The String %s Is A Palindrome.\n",st);
	l:return 0;
}
void main()
{
	char str[100], string[100];
	printf("Enter A String: ");
	scanf("%s",&str);
	strlength(str);
	str_palincheck(str);
}
	
	//printf("Enter A Second String: ");
	//scanf("%s",&string);
	//str_palincheck(str);
	

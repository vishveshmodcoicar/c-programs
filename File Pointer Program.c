#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	FILE *ptr1;
	FILE *ptr2;
	char c;
	
	if (argc<3){
		printf("Error In Input");
		return -1;
	}
ptr1=fopen(argv[1],"r");
ptr2=fopen(argv[2],"w");

c=fgetc(ptr1);
while (c != EOF){
	fputc(c,ptr2);
	c=fgetc(ptr1);
}

fclose(ptr1);
fclose(ptr2);

printf("Operation Complete!\n");

return 0;
}
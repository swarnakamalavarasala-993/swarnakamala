#include<stdio.h>
int main()
{
	char name[30]="welcome\0 to c programming";
	int i=0;
	while (name[i]!='\n')
	putchar(name[i]);
	i++;
	{
		return 0;
	}
}

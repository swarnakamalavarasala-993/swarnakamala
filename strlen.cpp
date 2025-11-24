#include<stdio.h>
#include<string.h>
int main()
{
	char name[20]={"varasalaswarna\0"};
	int len;
	len=strlen(name);
	printf("length=%d",len);
	return 0;
}


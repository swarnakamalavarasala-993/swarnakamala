#include<stdio.h>
int main()
{
	int x=10,y=20;
	const int *ptr=&x;
//	*ptr=15;
	ptr =&y;
	return 0;
}

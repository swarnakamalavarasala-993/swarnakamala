# include<stdio.h>
int main()
{
	int a[10],i,j,n,temp,min;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements in  array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("before swapping:%d ",a[i]);
	}
	for (i=0;i<n;i++)
	{
		min=i;
		for (j=i+1;j<n;j++)
		{
			if(a[j]<a[min]);
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("after swapping:%d" ,a[i]);
	}
	return 0;
}

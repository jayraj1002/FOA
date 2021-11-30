/*Name: Jayraj vaghasiya
Enrollment no: 19BEIT30030*/


#include<stdio.h>

int main()
{
	int a[100],i,j,n,temp,min;
	printf("How much elements do you want to sort:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
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
		printf("a[%d]:%d\n",i,a[i]);
	}
}
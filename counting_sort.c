#include "stdio.h"
#include "stdlib.h"

void counting_sort(int a[],int n){
	int max=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	int b[n];
	int k=max+1;
	int c[k];
	for (int i = 0; i < k; ++i)
	{
		c[i]=0;
	}
	for (int i = 0; i < n; ++i)
	{
		c[a[i]]++;
	}
	for (int i = 1; i < k; ++i)
	{
		c[i]=c[i]+c[i-1];
	}
	for (int i = 0; i < n; ++i)
	{
		b[c[a[i]]-1]=a[i];
		c[a[i]]--;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i]=b[i];
	}
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	counting_sort(a,n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i] );
	}
	return 0;
}
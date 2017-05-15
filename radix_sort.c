#include "stdio.h"

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

void radix_sort(int a[],int n){
	int max=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	int len=0;
	while(max>0){
		max=max/10;
		len++;
	}
	
	printf("%d\n",len );
	int k=1;
	for (int i = 0; i < len; ++i)
	{
		int b[n];
		int c[10];
		//puts("");
		for (int j = 0; j < 10; ++j)
		{
			c[j]=0;
		}
		for (int j = 0; j < n; j++)
		{
			c[((a[j])/k)%10]++;
		}
		for (int j = 1; j < 10; ++j)
		{
			c[j]=c[j]+c[j-1];
		}
		for (int j = 0; j < n; ++j){
			//printf("%d   ",(c[(a[j]/k)%10]-1) );
			b[c[(a[j]/k)%10]-1]=a[j];
			c[(a[j]/k)%10]--;
		}
		for (int j = 0; j < n; ++j){
			a[j]=b[j];
		}
		k=k*10;
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
	radix_sort(a,n);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",a[i] );
	}
	return 0;
}
#include<stdio.h>
int main(){
	int n,i,j,t;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}   

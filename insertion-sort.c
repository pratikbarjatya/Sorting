#include<stdio.h>
void insertion_sort(int a[],int n){
	int i,j,t;
	for(i=1;i<n;i++){
		t=a[i];
		j=i-1;
		while(j>=0 && a[j]>t){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	} 	
}
int main(){
	int i,n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}

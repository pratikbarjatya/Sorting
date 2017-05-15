#include<stdio.h>
void selection_sort(int a[],int n){
	int k,i,j,min,temp;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	
	}
}
int main(){
	int n,i,k;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
		for(k=0;k<n;k++){
		printf("%d",a[k]);}
	return 0;
}

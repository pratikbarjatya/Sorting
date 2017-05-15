#include<stdio.h>
int n;
void print(int *ar,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	puts("");
}
void Merge(int a[],int i,int k,int j){
	int l=i;
	int r=k;
	int aa=0;
	int b[100];
	while(l<k && r<j){
		if(a[l]<a[r]){
			b[aa++]=a[l++];
		}
		else{
			b[aa++]=a[r++];
		}
	}
	while(l<k){
		b[aa++]=a[l++];
	}
	while(r<j){ 
		b[aa++]=a[r++];
		
	}
	aa=0;
	for(l=i;l<j;l++){
		a[l]=b[aa++];
	}
}
void merge_sort(int a[],int i,int j){
	int k,t;
	if(j-i==2){
		if(a[i]>a[j-1]){
			t=a[j-1];
			a[j-1]=a[i];
			a[i]=t;
		}
		return;
	}
	else if(j-i==0 || j-i==1){
		return;
	}
	else if(1){
		k=(i+j)/2;
		int p;
		merge_sort(a,i,k);
		merge_sort(a,k,j);
		Merge(a,i,k,j);
	}	
}
int main(){
	int i,j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	merge_sort(a,0,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

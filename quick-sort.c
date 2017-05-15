#include <stdio.h>
#include <stdlib.h>

void swap(int a[],int i, int j) {
   int temp = a[i];
   a[i] = a[j];
   a[j] = temp;
}

int partition(int a[], int i, int j, int p) {
   int l = i;
   int r = j;

   while(l<=r) {
      while(a[l] < p) {
         l++;
      }
		
      while(r > 0 && a[r] >=p) {
         r--;
      }

      if(l >= r) {
         break;
      } else {
         swap(a,l,r);
      }
   }
   swap(a,l,j);
   return l;
}

void quickSort(int a[],int i, int j) {
   if(j>i){
      int p = a[j];
      int k = partition(a,i,j,p);
      quickSort(a,i,k-1);
      quickSort(a,k+1,j);
   }        
}

main() {
   int n,i;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   int a[n];
   printf("Enter the array: ");
   for(i=0;i<n;i++){
   	scanf("%d",&a[i]);
   }
   quickSort(a,0,n-1);
   for(i=0;i<n;i++){
   	printf("%d ",a[i]);}
   return 0;
}

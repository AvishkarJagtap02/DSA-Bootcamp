//Printing Prime numbers in the array
#include <stdio.h>
void main() {
    int arr1[10];
    int n;
    int *ptr1 = arr1,temp;

       printf("Enter Size : ");
       scanf("%d",&n);
       int *ptr2 = &arr1[n-1];

       printf("Enter elements in the array :\n");
       for(int i=0;i<n;i++) {
	      scanf("%d",&arr1[i]);
       }
       printf("\n");
       printf("The array is :\n");
       for(int i=0;i<n;i++) {
	      printf("%d ",arr1[i]);
       }
       printf("\n");
       printf("The Prime Numbers in array is :\n");
       for(int i=0;i<n;i++) {
       		for(int j=2;j<i;j++) {
			if(n%j==0)
	      			printf("%d ",arr1[i]);
		}
       }
       printf("\n");
}



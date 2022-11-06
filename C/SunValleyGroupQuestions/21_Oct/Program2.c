//Reverse the array
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
       printf("array before reverse:\n");
       for(int i=0;i<n;i++) {
	      printf("%d ",arr1[i]);
       }
       printf("\n");
       while(ptr1<ptr2) {
	       temp = *ptr1;
	       *ptr1 = *ptr2;
	       *ptr2 = temp;
	        ptr1++;
	        ptr2--;
       }
       printf("\n");
       printf("array after reverse:\n");
       for(int i=0;i<n;i++) {
	      printf("%d ",arr1[i]);
       }
       printf("\n");
}



//odd And even elements in spaerate arrays
#include <stdio.h>
void main()
 {
    int arr1[10], even_arr[10], odd_arr[10];
    int i,j=0,k=0,n;

       printf("Enter Size : ");
       scanf("%d",&n);

       printf("Enter elements in the array :\n");
       for(i=0;i<n;i++) {
	      scanf("%d",&arr1[i]);
	}

    	for(i=0;i<n;i++) {
		if (arr1[i]%2 == 0) {
	   		even_arr[j] = arr1[i];
	   		j++;
		}
		else {
	   		odd_arr[k] = arr1[i];
	   		k++;
		}
    	}

    printf("The Even elements are : \n");
    for(i=0;i<j;i++) {
	printf("%d ",even_arr[i]);
    }
    printf("\n");

    printf("The Odd elements are :\n");
    for(i=0;i<k;i++) {
	printf("%d ", odd_arr[i]);
    }
    printf("\n");
 }



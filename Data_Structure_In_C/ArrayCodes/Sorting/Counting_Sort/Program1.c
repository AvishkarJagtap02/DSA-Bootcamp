
#include<stdio.h>
void main() {
        int arr[] = {3,7,2,1,8,2,5,2,7};
        int size = sizeof(arr)/sizeof(arr[0]);
        printf("Original Array: \n");
	for(int i=0;i<size;i++) {
            printf("%d ",arr[i]);
        }
	printf("\n");
	//step1 = Find max element
        int max = arr[0];
        for(int i = 1 ;i < size;i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
	printf("Max element = %d\n",max);	//8
	
	//step2 = create another array To store the count of each element and initialise all elements to zero; 
        int countArr[max+1];	//size = 9
	for(int i=0;i<=max;i++) {
		countArr[i] = 0;
        }
	printf("CountArr: ");
        for(int i=0;i<=max;i++) {
            printf("%d ",countArr[i]);
        }
	printf("\n");

	//step3 = store the count of each element of arr in countArr
        for(int i = 0; i < size; i++) {
            countArr[arr[i]]++;						
        }
	printf("CountArr: ");
        for(int i = 0; i <size; i++) {
            printf("%d ",countArr[i]);
        }
	printf("\n");

	//step4 = create cumulative array from the countArr
        for(int i=1; i<=max; i++) {
            countArr[i] = countArr[i] + countArr[i-1];
        }
	
	printf("CountArr: cumulative ");
        for(int i = 0; i <size; i++) {
            printf("%d ",countArr[i]);
        }
	printf("\n");
	
	//step 5 = create another array to				 
	int output[max+1];						/*Original Array: 
									0 1 2 3 4 5 6 7 8
									3 7 2 1 8 2 5 2 7 
									Max element = 8
									CountArr: 0 0 0 0 0 0 0 0 0 
									CountArr: 0 1 3 1 0 1 0 2 1 
									CountArr: cumulative0 1 4 5 5 6 6 8 9 */

        for(int i=size-1;i>=0;i--) {
            output[countArr[arr[i]]-1] = arr[i];
            countArr[arr[i]]--;
        }
	
	printf("outputArr: ");
        for(int i = 0; i <size; i++) {
            printf("%d ",output[i]);
        }
	printf("\n");

	//step 6 = store the output array to original array
        for(int i=0;i<size;i++) {
            arr[i] = output[i];
        }
	//printing the array
        for(int i=0;i<size;i++) {
            printf("%d ",arr[i]);
        }
	printf("\n");
}

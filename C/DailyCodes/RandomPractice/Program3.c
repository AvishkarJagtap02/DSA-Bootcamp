#include<stdio.h>
int Diff(int arr[],int size) {			//arr[] = {2,-3,85,23,-27}
	
	int maxeve=0,minodd=0,diff=0;
	for(int i= 0; i<size;i++) {
			if(i == 0) {
				if(arr[i]%2==0) {
					maxeve = arr[i]; 
				}else {
					minodd = arr[i]; 
				}
			}else {
				if(arr[i]%2==0 && arr[i]>maxeve) {
					maxeve = arr[i];
				}
				else if(arr[i]%2!=0 && arr[i]<minodd){
					minodd = arr[i];
				}
			}
	}
	diff = maxeve - minodd;
}
void main() {
	int size;
	printf("Enter Size of array\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Elements of Array\n");
	for(int i=0;i<size;i++) {
		scanf("%d",&arr[i]);
	}
	int diff = Diff(arr,size);
	printf("diff between maxeve and minodd is %d \n",diff);
}


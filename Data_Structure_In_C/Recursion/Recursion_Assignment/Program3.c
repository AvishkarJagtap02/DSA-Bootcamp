//fibonacci series
//0 1 2 3 4 5 6 7  8  9  
//0 1 1 2 3 5 8 13 21 34
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d ",fibonacci(n));


    return 0;
}



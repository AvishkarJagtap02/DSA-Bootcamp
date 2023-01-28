#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, flag = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to check: ");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("Character found in the string.\n");
    else
        printf("Character not found in the string.\n");

    return 0;
}


// Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') 
        str[len - 1] = '\0';

    len = strlen(str);
    int first = 1;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first)
                printf(",");
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }

    return 0;
}
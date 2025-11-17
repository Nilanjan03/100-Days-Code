// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    
    // Remove newline if present
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    int lastSpace = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && i != lastSpace)
            printf("%c.", name[i + 1]);
    }

    printf(" %s", &name[lastSpace + 1]);

    return 0;
}
// Q97: Print the initials of a name.#include <stdio.h>

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0')
            printf("%c.", name[i+1]);
    }

    return 0;
}
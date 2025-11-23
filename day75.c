// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char filename[100];
    char text[200];
    FILE *fp;

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}

// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char c;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files");
        return 1;
    }

    while ((c = fgetc(in)) != EOF) {
        fputc(toupper(c), out);
    }

    fclose(in);
    fclose(out);

    printf("File converted successfully.\n");
    return 0;
}


// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    char c;
    int characters = 0, words = 0, lines = 1;
    int prevSpace = 1;

if (fp == NULL) {
    printf("File not found");
    return 1;
   }

while ((c = fgetc(fp)) != EOF) {
    characters++;

    if (c == '\n')
    lines++;
    if (c == ' ' || c == '\n' || c == '\t') {
    prevSpace = 1;
   } else {
    if (prevSpace == 1)
    words++;
    prevSpace = 0;
        }
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}

// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char src[100], dest[100];
    FILE *fs, *fd;
    char c;

    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    fs = fopen(src, "r");
    fd = fopen(dest, "w");

    if (fs == NULL || fd == NULL) {
        printf("Error opening files");
        return 1;
    }

    while ((c = fgetc(fs)) != EOF) {
        fputc(c, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s\n", dest);
    return 0;
}

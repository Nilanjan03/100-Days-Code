// Q121 Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main() {
    FILE *f;
    char name[50];
    int age;
    scanf("%s %d", name, &age);
    f = fopen("info.txt", "w");
    fprintf(f, "Name: %s, Age: %d", name, age);
    fclose(f);
    printf("File created successfully! Data written to info.txt");
    return 0;
}
// Q93 :Check if two strings are anagrams of each other.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};  // frequency arrays
    int i;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Convert to lowercase and count frequency of each character
    for(i = 0; str1[i] != '\0'; i++) {
        if(isalpha(str1[i]))
            count1[tolower(str1[i])]++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        if(isalpha(str2[i]))
            count2[tolower(str2[i])]++;
    }

    // Compare frequency arrays
    for(i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are ANAGRAMS.\n");
    return 0;
}
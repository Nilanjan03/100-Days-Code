// Q94 :Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    gets(sentence);  // For simplicity; use fgets() in modern code

    while (1) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            word[j] = '\0';  // End current word

            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0;  // Reset word index for next word

            if (sentence[i] == '\0')
                break;
        } else {
            word[j++] = sentence[i];
        }
        i++;
    }

    printf("The longest word is: %s\n", longest);
    printf("Length of the longest word: %d\n", maxLen);

    return 0;
}
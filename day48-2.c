// Q96 :Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char t = *start;
        *start++ = *end;
        *end-- = t;
    }
}

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    if (s[len - 1] == '\n') s[len - 1] = '\0';
    char *word_start = s, *temp = s;
    while (*temp) {
        if (*temp == ' ') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
        temp++;
    }
    reverse(word_start, temp - 1);
    printf("%s", s);
    return 0;
}
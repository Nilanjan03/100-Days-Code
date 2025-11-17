// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int n = strlen(s);

    int last[256];
    for(int i=0;i<256;i++) last[i] = -1;

    int start = 0, maxlen = 0;
    for(int i=0;i<n;i++) {
        if(last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;
        last[(unsigned char)s[i]] = i;
        int len = i - start + 1;
        if(len > maxlen) maxlen = len;
    }

    printf("%d", maxlen);
    return 0;
}
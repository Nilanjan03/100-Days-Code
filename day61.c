// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    int q[n], front = 0, rear = -1;

    for(int i=0;i<n;i++) {
        if(arr[i] < 0) q[++rear] = i;
        if(q[front] <= i-k && front <= rear) front++;
        if(i >= k-1) {
            if(front <= rear) printf("%d ", arr[q[front]]);
            else printf("0 ");
        }
    }
    return 0;
}
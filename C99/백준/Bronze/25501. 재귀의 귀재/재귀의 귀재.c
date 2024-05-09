#include <stdio.h>
#include <string.h>

int cnt = 0;

int recursion(const char* s, int l, int r) {
    cnt++;

    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    cnt = 0;
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    int t;
    
    char s[1000];
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    { 
        scanf(" %s", s);
        printf("%d ", isPalindrome(s));
        printf("%d\n", cnt);
    }
}
#include <stdio.h>

int main(void)
{
    int A, B, C,MAX;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B && B == C) printf("%d", 10000 + A * 1000);
    else if (A == B || B == C) printf("%d", 1000 + B * 100);
    else if (C == A) printf("%d", 1000 + C * 100);
    else {
        if (A > B && A > C)
        {
            MAX = A;
            printf("%d", MAX * 100);
        }
        else if (B > A && B > C)
        { 
            MAX = B;
            printf("%d", MAX * 100);
        }
        else
        {
            MAX = C;
            printf("%d", MAX * 100);
        }
    }
}
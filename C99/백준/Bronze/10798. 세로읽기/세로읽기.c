#define _CRT_NOT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[16];
    char re[5][16] = { NULL, };
    int max = 0, len = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s", str);
        len = strlen(str);
        if (max < strlen(str))
            max = len;

        for (int j = 0; j < len; j++) {
            re[i][j] = str[j];
        }
    }


    for (int j = 0; j < max; j++) {
        for (int i = 0; i < 5; i++) {
            if (re[i][j] != NULL) {
                printf("%c", re[i][j]);
            }
        }
    }

    return 0;
}
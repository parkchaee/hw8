#include <stdio.h>


int main(void) {
    char ch[100];
    int len;
    printf("Input>");
    scanf_s("%s", ch);
    len = strlen(ch);
    printf("Output>");
    for (int i = 0;i < len;i++) {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            printf("%c", ch[i] + 32);
        }
        else if (ch >= 'a' && ch <= 'z') {
            printf("%c", ch[i] - 32);
        }
        else {
            printf("error");
        }
        printf("\n");

    }
    return 0;
}
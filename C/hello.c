#include <stdio.h>

int main(void) {
    char name[256];
    printf("name? ");
    scanf("%s", name);
    printf("hello, %s!\n", name);
    return 0;
}
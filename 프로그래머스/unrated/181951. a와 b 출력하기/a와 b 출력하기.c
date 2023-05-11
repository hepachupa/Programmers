#include <stdio.h>

int main(void) {
    int a;
    int b;
    int range = 100000;
    scanf("%d %d", &a, &b);
    if(-range <= a && a <= range)
        printf("a = %d\n", a);
    if(-range <= b && b <= range)
        printf("b = %d\n", b);
    return 0;
}
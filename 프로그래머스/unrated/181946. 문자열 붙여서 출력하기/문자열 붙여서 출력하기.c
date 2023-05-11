#include <stdio.h>
#include <string.h>
#define LEN_INPUT1 10
#define LEN_INPUT2 10

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);
        
    printf("%s",strcat(s1,s2));
    return 0;
}
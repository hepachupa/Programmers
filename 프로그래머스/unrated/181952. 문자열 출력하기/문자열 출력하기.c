#include <stdio.h>
#include <string.h>
#define LEN_INPUT 1000000

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    if(1 <= strlen(s1) && strlen(s1) <= LEN_INPUT) {
        printf("%s",s1);
    }

    return 0;
}

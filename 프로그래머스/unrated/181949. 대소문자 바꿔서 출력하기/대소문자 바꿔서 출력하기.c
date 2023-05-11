#include <stdio.h>
#include <string.h>
#define LEN_INPUT 19

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for(int i = 0; i< strlen(s1); i++){
        if(isupper(s1[i]))
            s1[i] = tolower(s1[i]);
        else if(islower(s1[i]))
            s1[i] = toupper(s1[i]);
    }
    printf("%s",s1);
    return 0;
}

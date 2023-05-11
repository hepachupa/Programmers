#include <stdio.h>
#define LEN_INPUT 9

int main(void) {
    char s1[LEN_INPUT]; // 1 <= LEN_INPUT <= 10
    int a;
    int count =0;
    scanf("%s %d", s1, &a);
    
    while(count < a){
        
        printf("%s",s1);
        count++;
    }
    
    return 0;
}
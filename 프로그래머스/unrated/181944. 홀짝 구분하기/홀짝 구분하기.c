#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    
    if(1<= a && a <= 1000){
        if((a % 2) == 0){
            printf("%d is even",a);
        }else{
            printf("%d is odd",a);
        }
    }
    return 0;
}
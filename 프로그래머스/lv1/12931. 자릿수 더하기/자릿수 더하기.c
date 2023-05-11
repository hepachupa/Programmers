#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(n>0){
        answer += n % 10; // ex) 123 % 10 = 3 (10으로 나눈 나머지) -> 1의 자리
                          // 123 / 10 = 12 (10으로 나눈 몫) -> 100의 자리, 10의 자리만 남음
        n /= 10;
    }
    
    return answer;
}
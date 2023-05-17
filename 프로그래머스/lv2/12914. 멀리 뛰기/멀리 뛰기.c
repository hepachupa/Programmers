#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 1칸 : 1 , 2칸 : 2 , 3칸 : 3 , 4칸 : 5
// 5칸 : 8 (3+4칸) , 6칸 : 13 (4+5칸) ==> 피보나치 수열
long long solution(int n) {
    long long answer = 0;
    long long num[n];
    
    num[0] = 1;
    num[1] = 1;
    
    for(int i = 2; i <= n; i++){
        num[i] = (num[i-1] + num[i-2]) % 1234567;
    }
     
    return num[n];
}
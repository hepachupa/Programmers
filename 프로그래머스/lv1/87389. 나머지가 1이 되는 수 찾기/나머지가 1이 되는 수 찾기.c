#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    
    // n % x = 1 이 되도록하는 가장 작은 자연수 x 
    // 3 <= n <= 1,000,000
    int answer = 0;
    int minValue = 999999;
    
    // (n-1) / x = 0 -> x는 n-1의 약수 
    // (n-1)의 가장 작은 약수 찾기
    for(int i = 2; i < n; i++){
        if((n-1) % i == 0){
            if(i < minValue){
                minValue = i;
            }
        }
    }
    answer = minValue; 
    return answer;
}
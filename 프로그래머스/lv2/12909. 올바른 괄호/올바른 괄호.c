#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    
    // '('와 ')'의 개수는 똑같아야함 -> 쌍으로 오기 때문에
    // '('가 오면 전체 개수 count++ 
    // ')'가 오면 전체 개수 count-- 
    // count == 0 ? true
    
    int length = strlen(s);
    int count = 0;
    
    // s의 맨앞에는 ')', 맨끝에는 '('이 올 수 없음
    if(s[0] == ')' || s[length-1] =='(') return false;
    else{
        for(int i = 0; i < length; i++){
            if(s[i] == '(') count++;
            else count--;
            
            // count가 음수가 되면 ')'이 '('없이 먼저 나온 경우
            if(count < 0) return false;
        }   
    }
     
    return (count == 0);
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(phone_number));    
    int length = strlen(phone_number);     
    strcpy(answer, phone_number);  // answer에 phone_number을 복사함
    for(int i = 0; i < length - 4 ; i++){ // 문자열 끝에서 네번째까지 
        answer[i]= '*';
    }

    return answer;
}
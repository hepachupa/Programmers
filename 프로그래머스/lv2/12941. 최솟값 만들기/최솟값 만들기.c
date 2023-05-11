#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//void BubbleSort(int Arr[], size_t Arr_len);
void SelectionSort(int Arr[],size_t Arr_len);

// A_len은 배열 A의 길이입니다.
// B_len은 배열 B의 길이입니다.
int solution(int A[], size_t A_len, int B[], size_t B_len) {
    
    // A에서 한 개, B에서 한 개를 뽑아 곱하기
    // 배열의 길이만큼 반복 -> 두 수를 곱한 값을 모두 누적하여 더하기
    // 최종 누적 값이 최소가 되도록 만들기 
    //  A가 3개 B가 5개라면 곱셈은 3번만 시행
    
    int answer = 0;
    
    // 가장 작은 수와 가장 큰 수를 곱하는 것이 가장 바람직
    // 1. A와 B를 오름차순으로 정렬해야함.
    SelectionSort(A, A_len); 
    SelectionSort(B, B_len);
    
    // 2. 둘 중에 더 짧은 배열을 기준으로 곱셈 
   int minValue = 0;
    if(A_len >= B_len){
       minValue = B_len;
   }else{
        minValue = A_len;
    }
    
    for(int i = 0 ; i < minValue ; i++){
        answer += A[i] * B[minValue - 1 - i];    
    }
    
    return answer;
}
/* 
void BubbleSort(int Arr[], size_t Arr_len){
    for(int i = 0; i < Arr_len ; i++){
        for(int j = 0; j < (Arr_len -1) - i; j++){
            if(Arr[j] > Arr[j+1]){
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }  
        }
    }    
}
*/

void SelectionSort(int Arr[], size_t Arr_len){
    int indexMin, temp;
    for(int i =0; i< Arr_len -1; i++){
        indexMin = i;
        for(int j = i+1; j < Arr_len; j++){
            if(Arr[j] < Arr[indexMin]){
                indexMin = j;
            }
        }
        
        temp = Arr[indexMin];
        Arr[indexMin] = Arr[i];
        Arr[i] = temp;
        
    }
}
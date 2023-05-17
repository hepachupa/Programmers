#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int &a, int &b) {
    return a>b;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> count(10000001); // 귤의 종류 별 개수를 닮을 벡터
    for(int i=0; i<tangerine.size(); i++) { 
        count[tangerine[i]] += 1;
    }
    sort(count.begin(), count.end(), cmp); // 내림차순으로 정렬
    
    int i=0; 
    while(k>0) { // k가 0일될때까지 벡터 탐색
        k -= count[i];
        i+=1;
        answer += 1;
    }
    return answer;
}
 
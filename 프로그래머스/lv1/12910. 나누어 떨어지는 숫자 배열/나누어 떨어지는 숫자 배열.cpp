#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    //  arr.size()는 벡터 배열 내 element의 개수를 반환
    
    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i] % divisor == 0){
            answer.push_back(arr[i]);
        }
    }
    
    // divisor로 나누어 떨어지는 element가 하나도 없다면 배열에 -1을 담아 반환
    if (answer.size() == 0){
        answer.push_back(-1);
    }
    
    // 벡터 배열을 오름차순으로 정렬
    sort(answer.begin(), answer.end());
    
    return answer;
}
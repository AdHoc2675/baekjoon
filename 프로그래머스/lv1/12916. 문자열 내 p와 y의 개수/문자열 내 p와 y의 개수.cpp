#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0;
    int yCount = 0;

    cout << s << endl;
    
    for (int i = 0 ; i < s.size() ; i++){
        if (toupper(s[i]) == 'P'){
            pCount++;
        } else if (toupper(s[i]) == 'Y'){
            yCount++;
        }
    }
                   
    if (pCount == yCount){
        answer = true;
    } else{
        answer = false;
    }

    return answer;
}
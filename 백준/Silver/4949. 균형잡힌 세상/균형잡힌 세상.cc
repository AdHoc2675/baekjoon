#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    while (true) {

        getline(cin, str);

        if (str == ".") {
            break;
        }

        stack<char> st;
        bool ok = true;


        for (char ch : str) {
            if (ch == '(' || ch == '[') {
                st.push(ch);

            } else if (ch == ')' || ch == ']') {

                if (st.empty()) {
                    ok = false;
                    break;
                }

                char top = st.top();
                if ((ch == ')' && top != '(') || (ch == ']' && top != '[')) {
                    ok = false;
                    break;
                }
                st.pop();
            }
            // 다른 문자들은 무시
        }

        if (!st.empty()) {
            ok = false;
        }

        cout << (ok ? "yes" : "no") << "\n";
    }

    return 0;
}
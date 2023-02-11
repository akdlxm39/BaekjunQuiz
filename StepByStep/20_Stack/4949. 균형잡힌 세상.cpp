#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    stack<char> st;
    char c;

    cin.get(c);
    while (c != '.') {
        while (c != '.') {
            if (c == '(' || c == '[')
                st.push(c);
            else if (c == ')') {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    st.push('x');
            }
            else if (c == ']') {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                    st.push('x');
            }
            cin.get(c);
        }
        cin.ignore();
        if (st.empty())
            cout << "yes\n";
        else {
            cout << "no\n";
            while (!st.empty()) st.pop();
        }
        cin.get(c);
    }
    return 0;
}
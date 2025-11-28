#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main() {
    string s;
    cin >> s;
    stack<char> a;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' ) {
            a.push(s[i]);
        }else {
            if (!a.empty()) {
                a.pop();
            }
        }
    }
    //a==5 || b<6
    //a==5 && b<6
    if (a.empty()) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balcanced" << endl;
    }
}

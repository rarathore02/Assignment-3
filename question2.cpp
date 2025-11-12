#include <iostream>
#include <stack>
using namespace std;
int main() {
    string str = "DataStructure";
    stack<char> st;

    for (char c : str)
        st.push(c);

    string rev = "";
    while (!st.empty()) {
        rev += st.top();
        st.pop();
    }

    cout << "Original: " << str << endl;
    cout << "Reversed: " << rev << endl;
}


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cout << "Enter a parenthesis of string: ";
    cin >> a;
    int n = a.size();
    stack <char> st;
    
    for(int i; i < n; i++){
        if(st.size() != 0 && st.top() == '(' && a[i] == ')'){
            st.pop();
        }
        else if(st.size() != 0 && st.top() == '[' && a[i] == ']'){
            st.pop();
        }
        else if (st.size() != 0 && st.top() == '{' && a[i] == '}'){
            st.pop();
        }
        else{
            st.push(a[i]);
        }
    }
    if (st.size() == 0){
        cout << "balanced" << endl;
    }
    else{
        cout << "not balanced" << endl;
    }

    return 0;
}
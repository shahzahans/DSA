

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter a adjacent similarity string: ";
    cin >> s;
    
    stack <char> st1;
    for (auto c:s){
        if(!st1.empty() && st1.top() == c){
            st1.pop();
        }
        else{
            st1.push(c);
        }
    }
    
    stack <char> st2;
    char c;
    string a;
    while (!st1.empty()){
        c = st1.top();
        st1.pop();
        st2.push(c);
    }
    
    while (!st2.empty()){
        a += st2.top();
        st2.pop();
    }
    
    cout << "After removing the 2-adjacent and equal letter of string \"" << s <<"\" is \"" << a << "\"";
    

    return 0;
}
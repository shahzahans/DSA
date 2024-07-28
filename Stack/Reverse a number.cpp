/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    stack <int> st;
    int num;
    cout << "Enter numbers: ";
    cin >> num;
    
    int store = num;
    
    int digit = 0;
    while(num!=0){
        digit = num % 10;
        st.push(digit);
        num /=10;
    }
    
    int num_reverse = 0;
    int mult = 1;
    int temp = 0;
    
    while (!st.empty()){
        digit = st.top();
        st.pop();
        temp = digit * mult;
        num_reverse = num_reverse + temp;
        mult = mult *10;
    }
    cout << "The reverse nummber of " << store << " is " << num_reverse;
    
}
/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Fibonacci 
 * Problem Statement: given a integer n, find fibonacci series to that term
 */
#include <iostream>
using namespace std;

int fibonacci(int n){
    //base case
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int n;
    //output 0,1,1,2,3,5
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
    
    cout << "The fibonacci series is - ";
    
    for(int i=0; i < n; i++){
        cout << fibonacci(i) << " ";
    }

    return 0;
}
/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Fibonacci 
 * Problem Statement: given an integer n, find Fibonacci series to that term
 */
#include <iostream>
using namespace std;

int fibonacci(int n){ //function to find the Fibonacci series
    //base case
    if (n == 0){ //if n is 0 then returns 0
        return 0;
    }
    else if (n == 1){ //if n is 1 returns 1
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2); // for fibonacci to occur previous add two numbers needs to be added to get the next one
}
int main()
{
    int n; // declaring a variable
    //output 0,1,1,2,3,5
    cout << "Enter a number: "; 
    cin >> n; //input method
    cout << endl;
    
    cout << "The fibonacci series is - ";
    
    for(int i=0; i < n; i++){ // printing the fibonacci sequence
        cout << fibonacci(i) << " ";
    }

    return 0;
}

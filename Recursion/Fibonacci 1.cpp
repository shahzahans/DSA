/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Fibonacci 
 * Problem Statement: given a integer n, find the nth term of the fibonacci series
 */
#include <iostream>
using namespace std;

int fibonacci(int n){ //Function to return fibonacci occurance
    //base case
    if (n == 0){ //if n is 0 returns 0
        return 0;
    }
    else if (n == 1){ //if n is 1 then returns 1
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2); //calling the recursion function
}
int main()
{
    int n;
    //output 0,1,1,2,3,5
    cout << "Enter a number: ";
    cin >> n;
    cout << endl;
    
    cout << "The " << n << "'th term of the fibonacci series is "<< fibonacci (n) << endl;

    return 0;
}

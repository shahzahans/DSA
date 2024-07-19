/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Print numbers in Decreasing order
 * Problem Statement: Given a number n, print all the numbers from n to 1 in decreasing order using recursion
 * return -1 if the element is not present
 */
#include <iostream>
using namespace std;

void recursion (int n){ // Calling the recursion function
    if(n < 0){ // if n is less than 0 then exits
        return;
    }
    cout << n << " "; 
    recursion(n -1); // function calling itself
}
int main()
{
    int n = 5; // number to start from 
    // output 5,4,3,2,1,0
    
    recursion(n); // calling the function

    return 0;
}

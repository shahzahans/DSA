/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Print numbers in Increasing order
 * Problem Statement: Given a number n, print all the numbers from 0 to n in increasing order using recursion
 */
#include <iostream>
using namespace std;

void recursion(int start, int n){ //recursion function to print the 0 to given number
    if(start == n +1){ // when start reaches n+1 then exits the function
        return;
    }
    cout << start << " "; //printing the all the numbers
    recursion(start +1, n); //calling recursion function itself
}

int main()
{
    int n = 5; //intialized given number
    int start = 0; // intialized start variable with 0
    
    recursion(start, n); // calling the recursion function

    return 0;
}

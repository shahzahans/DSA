/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Print numbers in Increasing/Decreasing order
 * Problem Statement: Given a number n, print all the numbers from n to 1 in decreasing order using recursion
 * return -1 if the element is not present
 */
#include <iostream>
using namespace std;

void recursion (int n){
    if(n < 0){
        return;
    }
    cout << n << " ";
    recursion(n -1);
}
int main()
{
    int n = 5;
    // output 5,4,3,2,1,0
    
    recursion(n);

    return 0;
}
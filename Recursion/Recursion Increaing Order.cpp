/**
 * Practice Problem ~ Shadman S.
 * Topic: Recursion
 * ~ Print numbers in Increasing order
 * Problem Statement: Given a number n, print all the numbers from 1 to n in increasing order using recursion
 */
#include <iostream>
using namespace std;

void recursion(int start, int n){
    if(start == n +1){
        return;
    }
    cout << start << " ";
    recursion(start +1, n);
}

int main()
{
    int n = 5;
    int start = 0;
    
    recursion(start, n);

    return 0;
}
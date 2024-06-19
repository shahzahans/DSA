/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an array of integers, reverse it.
 */

#include <iostream>
using namespace std;

int main()
{
    int a[9] = {1,2,3,4,5,6,9,10,12};
    int b[9];
    int j = 0;

    for (int i = 8; i >= 0; i--){
        b[j] = a[i];
        j = j + 1;
    }
    
    for (int i = 0; i < 9; i++){
        cout << b[i]  << " ";
    }

    return 0;
}
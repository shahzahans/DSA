/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an Array of integer find the summ of all it's element
 */
 
#include <iostream>
using namespace std;
#include <array>

int main()
{
 int a[5] = {3,2,3,6,4};
 int sum = 0;
 int arraySize = sizeof(a)/sizeof(a[0]);
 cout << "Sum of an Array: ";
    for (int i = 0; i < arraySize; i++){
        sum += a[i];
    }
    cout << sum << "\n";

    return 0;
}
/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Give an array of integers and reverse it.
 */

#include <iostream>
using namespace std;

int main()
{
    int a[9] = {1,2,3,4,5,6,9,10,12}; // Initializing Array
    int b[9]; // Declaring Array to store the reverse Array
    int j = 0; // Variable that will reperesent the indicies of B[j]

    for (int i = 8; i >= 0; i--){ // Loop to reverse
        b[j] = a[i];
        j = j + 1;
    }
    
    for (int i = 0; i < 9; i++){ // Loop to print the reversed Array
        cout << b[i]  << " ";
    }

    return 0;
}

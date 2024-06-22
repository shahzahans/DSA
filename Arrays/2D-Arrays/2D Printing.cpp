/**
 * Practice Problem ~ Shadman S.
 * Topic: 2D Array'S
 * Problem Statement: Given a matrix (2D~Array) the task is to print it ~
 */

#include <iostream>
using namespace std;

int main()
{
    int a [3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // Initialize the Array

    for (int i=0; i<3; i++){ // Loop to traverse through the row
        for (int j=0; j<3; j++){ // Loop to traverse through the column
            cout << a[i][j] << " "; // Prints the 2D Arrays
        }
    cout << endl;
}
    return 0;
}

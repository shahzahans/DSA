/**
 * Practice Problem ~ Shadman S.
 * Topic: 2D Array'S
 * Problem Statement: Given an n*n matrix and an integer x, find the position of x in the matrix if it is present
 * Otherwise, print "Element not found"
 * Note: Every row and column of the matrix is sorted in increasing order
 */

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // Initializing 2D ARRAY
    
    int x; // Initializing variable 
    int flag = 0; // created flag variable to confirm if-else-cases
    
    cout << "Enter the number to find its position: ";
    cin >> x;
    
    
    for (int i = 0; i < 3; i++){ // Loop through 2d Array to find the position of the element
        for (int j = 0; j < 3; j++){
            if (a[i][j] == x){
                flag = 1; // Confirm If statement
                cout << "The number " << x << " position in the element is [" << i << "]["<< j << "]" << endl;
            }
        }
    }
    if (flag == 0){ // Confirms if the element position is not found within the Array
        cout << "Element " << x << " is not present in the Array" << endl;
    }
    
    

    return 0;
}

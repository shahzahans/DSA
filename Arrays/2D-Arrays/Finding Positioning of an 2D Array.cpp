/**
 * Practice Problem ~ Shadman S.
 * Topic: 2D Array'S
 * Problem Statement: Given an n*n matrix and an integer x, find the position of x in the matrixif it is present
 * otherwise, print "Element mot found"
 * Note: Every row and column of the matrix is sorted in increasing order
 */

#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int x;
    int flag = 0;
    
    cout << "Enter the number to find its position: ";
    cin >> x;
    
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (a[i][j] == x){
                flag = 1;
                cout << "The number " << x << " position in the element is [" << i << "]["<< j << "]" << endl;
            }
        }
    }
    if (flag == 0){
        cout << "Element " << x << " is not present in the Array" << endl;
    }
    
    

    return 0;
}
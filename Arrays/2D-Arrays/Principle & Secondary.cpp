/**
 * Practice Problem ~ Shadman S.
 * Topic: 2D Array'S
 * Problem Statement: Given a n*n matrix (2D~Array) print its ~
 * 1) Principle Diagonal Elements
 * 2) Secondary diagonal Elements
 */
#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    // Principle diagonal elements are the elements that are present in the same row and column position
    cout << "Principle diagonal elemeents are (";
    for (int i=0; i<3;i++){ // Loop to traverse through rows++
        for (int j=0; j<3; j++){ // Loop to traverse through column++
            if (i==j){
                if(i == 2){
                    cout << a[i][j];
                }
                else
                    cout << a[i][j] <<  ",";
            }
        }
    }
    cout << ")";
    cout << endl;
    
    // Secondary diagonal elements row++ & column--
    
    cout <<  "Secondary diagonal elemeents are (";
    int k = 2;
    for (int i=0; i<3; i++){ // Loop to traverse through row++
        if (i==2){
            cout << a[i][k];
            k--; // helps traverse backward
        }
        else{
            cout << a[i][k] <<  ",";
            k--;
        }
    }
    cout << ")";
    

    return 0;
}

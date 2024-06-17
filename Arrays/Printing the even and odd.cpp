/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an array of integers, print the even and odd integers
 */
#include <iostream>
using namespace std;

int main()
{
    int array[6] = {1,2,3,4,5,6}; // intialize the Array
    int arrayeven[6] = {0}; // initiliaze array to store even #'s
    int arrayodd[6] = {0}; // initiliaze array to store odd #'s
    
    int evenIndex = 0; // Intiliaze varable for accessing even # index
    int oddIndex = 0; // Intiliaze varable for accessing odd # index
    
    for (int i = 0; i < 6; i++){ // Loop through to find even and odd #'s within the Array
        if (array[i]%2==0){
            arrayeven[evenIndex++] = array[i];
        }
        else {
            arrayodd[oddIndex++] = array[i];
        }
    }
    
    for (int i = 0; i < evenIndex; i++){ // Printing the even #'s of Array
        cout << arrayeven[i] <<  " ";
    }
    
    cout << endl;
    
    for (int i = 0; i < oddIndex; i++){ // Printing the ODD #'s of Array
            cout << arrayodd[i] << " ";
    }
    cout << endl;


    return 0;
}

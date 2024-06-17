/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an array of integers, print the even and odd intgers
 */
#include <iostream>
using namespace std;

int main()
{
    int array[6] = {1,2,3,4,5,6};
    int arrayeven[6] = {0};
    int arrayodd[6] = {0};
    
    int evenIndex = 0;
    int oddIndex = 0;
    
    for (int i = 0; i < 6; i++){
        if (array[i]%2==0){
            arrayeven[evenIndex++] = array[i];
        }
        else {
            arrayodd[oddIndex++] = array[i];
        }
    }
    
    for (int i = 0; i < evenIndex; i++){
        cout << arrayeven[i] <<  " ";
    }
    
    cout << endl;
    
    for (int i = 0; i < oddIndex; i++){
            cout << arrayodd[i] << " ";
    }
    cout << endl;


    return 0;
}
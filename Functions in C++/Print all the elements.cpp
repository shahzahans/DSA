/**
 * Practice Problem ~ Shadman S.
 * Topic: Functions 
 * Problem Statement: given two numbers, write a function that prints all the elements present in the Array separated by a comma
 */
#include <iostream>
using namespace std;


void printArray(int a[], int n){
    for (int i = 0; i < n ; i++){
        if (a[i] == n ){
            cout << a[i];
        }
        else{
            cout << a[i] << ",";
        }
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    cout << "The size of Array is " << n << " and the element that is present within the array is {";
    
    printArray (a,n);
    
    cout << "}";
    
}

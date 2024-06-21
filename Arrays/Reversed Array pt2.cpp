/**
 * Practice Problem ~ Shadman S.
 * Topic: Array'S
 * Problem Statement: Given an array of integers, reverse it
 * Note: Do this without using any extra space
 */

#include <iostream>
using namespace std;

int main()
{
    int Arr[] = {1,4,2,3,0,5};
    int start = 0;
    int r = 5;
    
    while (start < r){
        int temp = Arr[r];
        Arr[r] = Arr[start];
        Arr[start] = temp;
        
        start++;
        r--;
    }

for (int i = 0; i < 6; i++){
    cout << Arr[i] << " ";
}
    return 0;
}
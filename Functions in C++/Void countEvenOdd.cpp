/**
 * Practice Problem ~ Shadman S.
 * Topic: Functions 
 * Problem Statement: 
 */
#include <iostream>
using namespace std;

void countEvenOdd(int a[], int n){
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < n; i++){
        if (a[i]%2==0){
            evenCount = evenCount + 1;
    
        }
        else{
            oddCount = oddCount + 1;
        }
    }
    cout << "The count of even number is " << evenCount << " and the count number of odd is " << oddCount << endl;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    countEvenOdd(a,n);

    return 0;
}
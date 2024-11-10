#include <iostream>
using namespace std;

int func(int r, int unit, int arr[], int n ){
    if( arr == nullptr || n == 0){
        return -1;
    }
    int x = r * unit;
    int tot = 0;
    int count = 0;
    
    for(int i=0; i<n; i++){
        tot += arr[i];
        count++;
        cout<<i<<" st house gave "<<tot<<" food"<<endl;
        
        if(tot>=x){
            break;
        }
    }
    
    if(tot>=x){
        return count;
    }

    return 0;
}

int main() {
    int arr[] = {2,8,3,5,7,4,1,2};
    int res = func(7, 2, arr, sizeof(arr)/sizeof(arr[0]));
    cout<<"Result: "<<res;
    return 0;
}

// Question: Rat Count House
// (Asked in Accenture OnCampus 10 Aug 2022, Slot 1)

// Problem Description :
// The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

// Note:

// Return -1 if the array is null
// Return 0 if the total amount of food from all houses is not sufficient for all the rats.
// Computed values lie within the integer range.
// Example:

// Input:

// r: 7
// unit: 2
// n: 8
// arr: 2 8 3 5 7 4 1 2
// Output:

// 4
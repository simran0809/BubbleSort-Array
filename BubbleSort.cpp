/*Bubble Sort
Bubble Sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order. This process continues until the array is sorted.

Algorithm Steps
Compare adjacent elements in the array.
Swap them if they are in the wrong order.
Continue this process for all elements in the array.
Repeat the above steps for all elements until no more swaps are needed.*/

#include <iostream>
#include <vector>
using namespace std;

// index0 is i and index 1 is i +i ;
// if a[i]>a[i+1] then swap it  if a[i]<a[i+1] then increment i++

// when the round 1 starts then from i = 0 to n-1;  last element will be max means sorted
// when the round 2 starts then from i = 0 to n-1-1;


//void h to kuch return nhi krna h fir 

class Solution{
public : 

void bubbleSort(vector<int>& arr){

    // nested loop 
    for (int round = 0; round < arr.size(); round++) { // Fixed loop variable
        for (int i = 0; i < arr.size() - 1 - round; i++) {

            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]); //wrong order then swap

            }
        }

    }
}

};

int main() {
    Solution sol;
    vector<int> arr = {5, 2, 9, 1, 5, 6,11,1};
    
    sol.bubbleSort(arr);
    
    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
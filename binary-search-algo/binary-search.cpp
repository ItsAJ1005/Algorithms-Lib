#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;                                                            // Leftmost index of array
    int end = size - 1;                                                       // Rightmost end of array
    int mid = start + (end - start)/2;                                        // mid = (start+end)/2 rewritten to avoid integer overflow

    while( start <= end){
        if(arr[mid] == key)
        return mid;                                                           // Return index if key is at mid index

        if(key > arr[mid]){                                                   //Search the right part
            start = mid + 1;
        }else {
            end = mid - 1;                                                    // Search left part 
        }

        mid = start + (end - start)/2;                                        // Update mid 
    }

    return -1;
    //NOT FOUND return -1 !!    
}

int main()
{
    int arr[] = { 9, 11, 12, 16, 32, 39 };                                    // Array in monotonous increasing order
    int x = 16;                                                               // Value to search in array is 16
    int n = sizeof(arr) / sizeof(arr[0]);                                     // Size of array is 'n'
    int result = binarySearch(arr, n, x);
    (result == -1)
        ? cout << "Element not present in array"
        : cout << "Element is present at " << result + 1 <<" place from the begining of this array\n";
    return 0;
}
// C++ Program to reverse an array using temporary array

#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    
    // Dynamically declaring the array 
    int* arr = new int[n];

    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    // Reverse logic for the array 
    int start = 0;
    int end = n - 1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // Printing the reversed array 
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

// Free the allocated memory space 
    delete[] arr;

    return 0;
}

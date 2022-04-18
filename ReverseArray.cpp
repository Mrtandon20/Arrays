#include<iostream>
using namespace std;

void Reverse(int arr[] , int n){
    int high = n-1;
    int low = 0;

    while(low<=high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main(){
    int n;
    cout<<"Enter the no of elements in the array : ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the "<<i<<"th element : "<<" ";
        cin>>arr[i];
    }
    Reverse(arr , n);
    cout<<"Reverse Array : ";
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
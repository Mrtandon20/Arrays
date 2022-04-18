#include<iostream>
using namespace std;

void Reverse(int arr[] , int n){
    
    int i =0;
    while(i<n-1){
    int high = i+1;
    int low = i;
    while(low<=high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
        }
        i=i+2;
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
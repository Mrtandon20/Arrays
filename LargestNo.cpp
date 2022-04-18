#include<iostream>
using namespace std;

int largest(int arr[] , int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
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
    cout<<"Largest Value of arr : "<<largest(arr , n);
}
#include<iostream>
using namespace std;

int sum(int arr[] , int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum +arr[i];
    }
    return sum;
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
    cout<<"Sum of arr : "<<sum(arr , n);
}
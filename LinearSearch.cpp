#include<iostream>
using namespace std;

int LinearSearch(int arr[] , int n , int element){
   for(int i=0; i<n; i++){
       if(arr[i] == element){
           return i;
       }
   }
   return -1;
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

    
    int ele;
      cout<<"Enter the element to search : ";
    cin>>ele;
    
    cout<<"Element : "<<LinearSearch(arr , n , ele);
}
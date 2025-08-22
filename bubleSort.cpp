#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
}
void display(int arr[],int n){
    cout<<"sorted array:  ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    cout<<"enter the element";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    
    }
    sort(arr,n);
    display(arr,n);
}

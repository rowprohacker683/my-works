#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int flag = 0;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];
     cout<<"enter the element of array: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];

    }
    int item;
    cout<<"enter terget : ";
    cin>>item;
    int f =0,l=n-1;
    while(f<=l){
        int mid = (f+l)/2;
        if(arr[mid] == item){
            cout<<"found at index "<< mid;


            flag = 1;
            break;
        }
        if(arr[mid]<item){
            f = mid+1;
        }
        else{
            l = mid-1;
        }

    }

    if(flag != 1){
        cout<<"not found";
    }




}

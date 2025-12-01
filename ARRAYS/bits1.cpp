#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    int l=0,r=n-1;
    while(l<r){
        if(arr[l]==0 && arr[r]==1){
            l++;
            r--;
        }
        else if(arr[l]==0 && arr[r]==1){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
}
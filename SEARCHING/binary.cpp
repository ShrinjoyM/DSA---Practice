#include<bits/stdc++.h>
using namespace std;
int search(int ar[],int n,int key){
    sort(ar,ar+n);
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ar[mid]==key){
            return mid+1;
            break;
        }
        else if(ar[mid]>key){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int ar[100];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int res=search(ar,size,key);
    if (res==-1){
        cout<<"Element not found.\n";
    }
    else{
        cout<<"Element found at position "<<res<<" of the sorted array."<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int pivot(int ar[],int n){
    int total=0;
    for(int i=0;i<n;i++){
        total+=ar[i];
    }
    int left=0,right=0;
    for(int i=0;i<n;i++){
        right=total-left-ar[i];
        if(left==right){
            return i;
            break;
        }
        left+=ar[i];
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int ar[100];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int ans=pivot(ar,n);
    cout<<"Index of pivot element = "<<ans+1;
    return 0;
}
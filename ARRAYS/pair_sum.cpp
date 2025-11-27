#include<bits/stdc++.h>
using namespace std;
int sum(int ar[],int n,int target){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ar[i]+ar[j]==target){
                cout<<"Element at position "<<i+1<<" and "<<j+1<<" adds up to "<<target<<"."<<endl;
            }
        }
    }
}
int main(){
    int ar[100];
    int size;
    cout<<"Enter the size of the arrray: ";
    cin>>size;
    int i;
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<size;i++){
        cin>>ar[i];
    }
    int target;
    cout<<"Enter the target number: ";
    cin>>target;
    sum(ar,size,target);
    return 0;
}
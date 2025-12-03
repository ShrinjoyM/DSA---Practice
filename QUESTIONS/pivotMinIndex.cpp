#include<bits/stdc++.h>
using namespace std;
int peak(int ar[],int n){
    int st=0,end=n-1;
    while(st<end){
        int mid=st+(end-st)/2;
        if(ar[mid]>=ar[0]){
            st=mid+1;
        }
        else{
            end=mid;
        }
    }
    return st;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<pair<int,int> ar;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ar.push_back({x,i});
    }
    sort(ar.begin(),ar.end());
    int ans=peak(ar,n);
    cout<<"Index of element = "<<ans+1;
    return 0;
}
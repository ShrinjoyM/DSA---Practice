#include <bits/stdc++.h>
using namespace std;
int totalOcc(vector<int>&ar,int n,int key){
    int st=0,end=n-1,f=-1,occ;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ar[mid]==key){
            f=mid;
            end=mid-1;
        }
        else if(ar[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    st=0,end=n-1;
    int l=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ar[mid]==key){
            l=mid;
            st=mid+1;
        }
        else if(ar[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<l<<endl;
    if(f==-1 && l==-1){
        occ=-1;
    }
    else{
        occ=(l-f)+1;
    }
    cout<<occ<<endl;
    return occ;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<int> ar;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        ar.push_back(x);
    }
    sort(ar.begin(),ar.end());
    int key;
    cout<<"Enter the element whose occurrence to be checked: ";
    cin>>key;
    int occ=totalOcc(ar,size,key);
    if(occ==-1){
        cout<<"Element not present.";
    }
    else{
        cout<<"Occurrence of "<<key<<" = "<<occ;
    }
    return 0;
}
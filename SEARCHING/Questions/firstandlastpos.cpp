#include <bits/stdc++.h>
using namespace std;
int firstPos(vector<pair<int,int>> &ar,int n,int key){
    int st=0,end=n-1,f=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ar[mid].first==key){
            f=ar[mid].second+1;
            end=mid-1;
        }
        else if(ar[mid].first<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return f;
}
int lastPos(vector<pair<int,int>> &ar,int n,int key){
    int st=0,end=n-1,l=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if (ar[mid].first==key){
            l=ar[mid].second+1;
            st=mid+1;
        }
        else if(ar[mid].first<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return l;
}
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    vector<pair<int,int>> ar;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        ar.push_back({x,i});
    }
    sort(ar.begin(),ar.end());
    int key;
    cout<<"Enter the element: ";
    cin>>key;
    int f=firstPos(ar,size,key);
    int l=lastPos(ar,size,key);
    if(f==-1 && l==-1){
        cout<<"Element not present.";
    }
    else{
        cout<<"First Position = "<<f<<endl<<"Last Position = "<<l;
    }
    return 0;
}
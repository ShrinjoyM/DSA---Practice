#include <bits/stdc++.h>
using namespace std;
int firstPos(vector<int> &ar,int n,int key){
    int st=0,end=n-1,f=-1;
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
            end=mid;
        }
    }
    return f;
}
int lastPos(vector<int> &ar,int n,int key){
    int st=0,end=n-1,l=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if (ar[mid]==key){
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
    return l;
}
int totalOcc(vector<int> &ar,int n,int key){
    int f=firstPos(ar,n,key);
    int l=lastPos(ar,n,key);
    int occ;
    if(f==-1 && l==-1){
        occ=-1;
    }
    else{
        occ=(l-f)+1;
    }
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
    cout<<"Enter the element: ";
    cin>>key;
    int occ=totalOcc(ar,size,key);
    if(occ==-1){
        cout<<"Element not present.";
    }
    else{
        cout<<"Occurrences of element = "<<occ;
    }
    return 0;
}
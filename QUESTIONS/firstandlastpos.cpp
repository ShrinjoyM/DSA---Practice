#include <bits/stdc++.h>
using namespace std;
int totalOcc(int ar[],int n,int key){
    int st=0,end=n-1,f=-1,l=-1,occ;
    while (st<=end){
        int mid=st+(end-st)/2;
        if (ar[mid]==key){
            f=mid;
            end=mid-1;
        }
        else if (ar[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    st=0,end=n-1;
    while (st<=end){
        int mid=st+(end-st)/2;
        if (ar[mid]==key){
            l=mid;
            st=mid+1;
        }
        else if (ar[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
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
    int ar[100];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
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
#include<bits/stdc++.h>
using namespace std;
bool occur(int ar[],int n){
    int i,j,c=1,arr[100],k=0,arr1[100],x=0,b,count=0;
    for(i=0;i<n;i++){
        if(i==0){
            arr1[x]=ar[i];
            x++;
            for(j=i+1;j<n;j++){
                if(ar[i]==ar[j]){
                    c++;
                }
            }
        }
        else{
            for(b=0;b<x;b++){
                if(ar[i]==arr1[b]){
                    count++;
                }
            }
            if(count==0){
                arr1[x]=ar[i];
                x++;
                for(j=i+1;j<n;j++){
                    if(ar[i]==ar[j]){
                        c++;
                    }
                }
            }
            count=0;
        }
        if(c>1){
            arr[k]=c;
            k++;
            c=1;
        }
    }
    bool unq=1;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(arr[i]==arr[j]){
                unq=0;
                break;
            }
        }
    }
    return unq;
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
    bool unq=occur(ar,size);
    if(unq==1){
        cout<<"True.";
    }
    else{
        cout<<"False.";
    }
    return 0;
}
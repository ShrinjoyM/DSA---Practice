#include<bits/stdc++.h>
using namespace std;
int occur(int ar[],int n){
    int i,j,c=1,arr[100],k=0,arr1[100],x=0,b,count=0;
    for(i=0;i<n;i++){
        if(i==0){
            arr1[x]=ar[i];
            x++;
            for(j=i+1;j<n;j++){
                if(ar[i]==ar[j]){
                    c+=1;
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
        //cout<<c;
        arr[k]=c;
        //cout<<arr[k];
        k++;
        c=1;
    }
    //int len=sizeof(arr);
    for(int a=0;a<k;a++){
        cout<<arr[a]<<" ";
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
    occur(ar,size);
    return 0;
}
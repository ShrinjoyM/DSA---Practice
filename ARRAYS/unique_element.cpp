#include<bits/stdc++.h>
using namespace std;
int unique(int ar[],int n){
    int i,j,c=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ar[i]==ar[j]){
                c++;
            }
        }
        if(c==1){
            cout<<ar[i]<<" is an unique element."<<endl;
        }
        c=0;
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
    unique(ar,size);
    return 0;
}
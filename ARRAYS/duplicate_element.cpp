#include<bits/stdc++.h>
using namespace std;
int duplicate(int ar[],int n){
    int i,j,c=0,arr[100],k=0,a,b,count=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ar[i]==ar[j]){
                c++;
            }
        }
        if(c>1){
            arr[k]=ar[i];
            k++;
            for(a=0;a<k;a++){
                if(ar[i]==arr[a]){
                    count++;
                }
            }
            if(count==1){
                cout<<ar[i]<<" is a duplicate element."<<endl;
            }
            count=0;
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
    duplicate(ar,size);
    return 0;
}
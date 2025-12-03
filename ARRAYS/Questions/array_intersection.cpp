#include<bits/stdc++.h>
using namespace std;
int intersection(int ar1[],int ar2[],int n){
    int i,j,c=0,arr[100],k=0,a,b,count=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(ar1[i]==ar2[j]){
                c++;
            }
        }
        if(c>=1){
            arr[k]=ar1[i];
            k++;
            for(a=0;a<k;a++){
                if(ar1[i]==arr[a]){
                    count++;
                }
            }
            if(count==1){
                cout<<ar1[i]<<" is part of both the arrays."<<endl;
            }
            count=0;
        }
        c=0;
    }
}
int main(){
    int ar1[100];
    int ar2[100];
    int size;
    cout<<"Enter the size of the arrray: ";
    cin>>size;
    int i;
    cout<<"Enter the 1st array elements: "<<endl;
    for(i=0;i<size;i++){
        cin>>ar1[i];
    }
    int j;
    cout<<"Enter the 2nd array elements: "<<endl;
    for(j=0;j<size;j++){
        cin>>ar2[j];
    }
    
    intersection(ar1,ar2,size);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c1++;
        }
        else if(arr[i]==1){
            c2++;
        }
        else if(arr[i]==2){
            c3++;
        }
    }
    cout<<c1<<endl<<c2<<endl<<c3<<endl;
    c2+=c1;
    c3+=c2;
    cout<<c1<<endl<<c2<<endl<<c3<<endl;
    for(int i=0;i<n;i++){
        if(i<c1){
            arr[i]=0;
        }
        else if(i>=c1 && i<c2){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={0,1,2,2,1,0};
    int n=sizeof(arr);
    sort(arr,n);
}
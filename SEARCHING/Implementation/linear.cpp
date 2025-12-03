#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int num,int n){
    int i,c=0;
    for(i=0;i<num;i++){
        if(n==arr[i]){
            cout<<n<<" is found at "<<i+1<<"th position."<<endl;
        }
    }
    if(c==0){
        cout<<n<<" is not found in the array."<<endl;
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
    int n;
    cout<<"Enter the element to be searched: ";
    cin>>n;
    search(ar,size,n);
    return 0;
}
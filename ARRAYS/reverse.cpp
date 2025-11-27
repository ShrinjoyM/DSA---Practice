#include<bits/stdc++.h>
using namespace std;
printArray(int arr[],int size){
    cout<<"Printing the array."<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"Array printed."<<endl;
}
int reverse(int ar[],int num){
    int arr[100],i;
    for(i=0;i<num;i++){
        arr[i]=ar[num-1-i];
    }
    printArray(arr,num);
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
    reverse(ar,size);
    return 0;
}
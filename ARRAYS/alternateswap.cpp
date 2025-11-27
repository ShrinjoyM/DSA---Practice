#include<bits/stdc++.h>
using namespace std;
printArray(int arr[],int size){
    cout<<"Printing the array."<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"Array printed."<<endl;
}
int alternateswap(int ar[],int num){
    int i;
    if(num%2==0){
        for(i=0;i<num;i+=2){
            swap(ar[i],ar[i+1]);
        }
    }
    else{
        for(i=0;i<num-1;i+=2){
            swap(ar[i],ar[i+1]);
        }
    }
    printArray(ar,num);
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
    alternateswap(ar,size);
    return 0;
}
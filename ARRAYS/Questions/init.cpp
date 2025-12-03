#include<bits/stdc++.h>
using namespace std;
printArray(int arr[],int size){
    cout<<"Printing the array."<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"Array printed."<<endl;
}
int main(){
    int ar[10];
    for(int i=0;i<10;i++){
        ar[i]=3;
    }
    printArray(ar,10);
    int len=sizeof(ar)/sizeof (int);
    cout<<len;
    return 0;
}
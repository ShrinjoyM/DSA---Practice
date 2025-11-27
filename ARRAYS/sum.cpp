#include<bits/stdc++.h>
using namespace std;
int sumofArray(int arr[],int num){
    int sum=0,i;
    for(i=0;i<num;i++){
        sum+=arr[i];
    }
    return sum;
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
    int sum;
    sum=sumofArray(ar,size);
    cout<<"Sum of all the aray elements = "<<sum<<endl;
    return 0;
}
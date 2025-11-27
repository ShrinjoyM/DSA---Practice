#include<bits/stdc++.h>
using namespace std;
int getMax(int arr[],int num){
    int max=INT_MIN,i;
    for(i=0;i<num;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int num){
    int min=INT_MAX,i;
    for(i=0;i<num;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
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
    int max,min;
    max=getMax(ar,size);
    min=getMin(ar,size);
    cout<<"Max Value = "<<max<<endl<<"Min Value = "<<min<<endl;
    return 0;
}
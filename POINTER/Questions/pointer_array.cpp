#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<"Address of 0th index of the array: "<<arr<<endl;  //prints the address of 0th index of the array 
    cout<<"Address of 0th index of the array: "<<&arr<<endl;  //another way of printing the address of 0th index of the array
    cout<<"Value at 0th index: "<<*arr<<endl;  //prints the value stored at 0th index of the array
    cout<<"Value at 3rd index: "<<*arr+3<<endl;  //prints the value stored at 3rd index of the array
}
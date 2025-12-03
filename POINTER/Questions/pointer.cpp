#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=14;
    int *p=&n;  //pointer variable...stores the address of n
    cout<<"Value of n: "<<n<<endl;  //prints the value of n
    cout<<"Address of n: "<<&n<<endl;  //prints the address of n
    cout<<"Value of *p: "<<*p<<endl;  //prints the value stored at the address of n
    cout<<"Address of n: "<<p<<endl;  //another way of printing the address of n
    cout<<"Address of p: "<<&p<<endl;  //prints the address of p
    (*p)++;  //incrementing the value stored at the address of n by 1
    cout<<"Value of *p+1: "<<*p<<endl;  //prints the value stored at the address of n after incrementing it by 1
    (*p)--; //decrementing the value of n back to 14
    int *q=p;  //stroing a pointer in another pointer
    cout<<"Value of *q: "<<*q<<endl; //prints the value stored at the address of p(value stored at the address of n) 
    cout<<"Value of *p: "<<*p<<endl; //prints the value stored at the address of n
    cout<<"Address of p: "<<q<<endl;  //prints the address stored at the address of p(address of n)
    cout<<"Address of n: "<<p<<endl;  //prints the address of n
    cout<<"Address of q: "<<&q<<endl;  //prints the address of q
    cout<<"Address of p: "<<&p<<endl;  //prints the address of p
}
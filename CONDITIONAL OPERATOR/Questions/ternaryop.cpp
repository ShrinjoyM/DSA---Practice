#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 integers to check the largest: ";
    cin>>a>>b>>c;
    (a>b)?((a>c)?cout<<"A is largest.":cout<<"C is largest."):((b>c)?cout<<"B is largest.":cout<<"C is largest.");
    return 0;
}
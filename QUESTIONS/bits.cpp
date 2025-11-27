#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    int a,c=0;
    while(n!=0){
        a=n&1;
        if(a==1){
            c++;
        }
        n>>1;
    }
    cout<<c;
}
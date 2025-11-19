#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n){
    float d,dec=0,i=0;
    while(n!=0){
        d=n%10;
        if(d==1){
            dec+=pow(2,i);
        }
        i++;
        n/=10;
    }
    return dec;
}
int main(){
    int n;
    cout<<"Enter the binary number: ";
    cin>>n;
    int ans=binarytodecimal(n);
    cout<<"Decimal equivalent: "<<ans;
    return 0;
}
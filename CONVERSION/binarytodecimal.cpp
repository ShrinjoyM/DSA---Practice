#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n){
    float d,s=0,i=0;
    while(n!=0){
        d=n%10;
        if(d==1){
            s+=pow(2,i);
        }
        i++;
        n/=10;
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter the binary number: ";
    cin>>n;
    int ans=binarytodecimal(n);
    cout<<ans;
    return 0;
}
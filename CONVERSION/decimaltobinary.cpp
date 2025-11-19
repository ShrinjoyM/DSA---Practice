#include<bits/stdc++.h>
using namespace std;
int decimaltobinary(int n){
    float ans=0,i=0,bit;
    while(n!=0){
        bit=n%2;
        ans+=bit*(pow(10,i));
        n/=2;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    int ans=decimaltobinary(n);
    cout<<"Binary equivalent: "<<ans;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    float ans=0,i=0,bit;
    while(n!=0){
        bit=n%2;
        ans+=bit*(pow(10,i));
        n/=2;
        i++;
    }
    cout<<ans<<endl;
    int a=ans;
    cout<<a<<endl;
    int d,s=0,j=0;
    while(a!=0){
        d=a%10;
        cout<<d<<"\t";
        d=abs(d-1);
        cout<<d<<endl;
        s+=pow(10,j)*d;
        cout<<"S="<<s<<endl;
        a/=10;
    }
    cout<<endl<<s;
    return 0;
}
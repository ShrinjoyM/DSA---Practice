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
int checkbits(int n){
    int c=0,a=decimaltobinary(n),d;
    while(a!=0){
        d=a%10;
        if(d==1){
            c++;
        }
        a/=10;
    }
    return c;
}
int main(){
    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    int c=checkbits(a);
    c+=checkbits(b);
    cout<<"Total no.of 1s in the binary representation of "<<a<< " and "<<b<<" is: "<<c;
    return 0;
}
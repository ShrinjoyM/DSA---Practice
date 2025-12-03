#include<bits/stdc++.h>
using namespace std;
void check(int n){
    int c=0;
    if(n>0){
        int a=n&(n-1);
        if(a==0){
            c=1;
        }
    }
    if(c==1){
        cout<<n<<" is a power of 2.";
    }
    else{
        cout<<n<<" is not a power of 2.";
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    check(n);
    return 0;
}
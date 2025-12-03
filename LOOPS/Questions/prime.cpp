#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.: ";
    cin>>n;
    int i,c=0;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number.";
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<n<<" is a prime number.";
    }
    return 0;
}
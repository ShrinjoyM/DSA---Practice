#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter: ";
    cin>>n;
    int bit,ans=0,i=1;
    while (n!=0) {
        bit = n % 2;
        n /= 2;
        ans+= bit * i;
        i *= 10;
    }
    cout<<ans<<endl;
    int d,newAns=0,k=0;
    while(ans!=0){
        d=ans%10;
        if(d==0){
            d=1;
        }
        else{
            d=0;
        }
        newAns=(d*pow(10,k))+newAns;
        k++;
        ans/=10;
    }
    cout<<newAns;
    return 0;
}

/*
    1010

1
10
100
1001
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1,j,star,side,n1;
    while(i<=n){
        n1=n+1-i;
        j=1;
        while(j<=n+1-i){
            cout<<j;
            j++;
        }
        star=i-1;
        while(star>0){
            cout<<"**";
            star++;
        }
        side=1;
        while(side<=n+1-i){
            cout<<n1;
            n1--;
            side--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
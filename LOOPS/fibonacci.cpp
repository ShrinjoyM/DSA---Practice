#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the range: ";
    int n;
    cin>>n;
    int t1=0,t2=1,t3;
    cout<<t1<<","<<t2;
    int i;
    for(i=1;i<=n-2;i++){
        t3=t1+t2;
        cout<<","<<t3;
        t1=t2;
        t2=t3;
    }
    return 0;
}
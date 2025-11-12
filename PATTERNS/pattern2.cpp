#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1;
    int n1=n;
    while(i<=n){
        int j=1;
        while(j<=n1){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        n1--;
        i++;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1,j;
    while(i<=n){
        j=i;
        while(j<i*2){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
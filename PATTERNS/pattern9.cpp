#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1,j,k=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<k<<" ";
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
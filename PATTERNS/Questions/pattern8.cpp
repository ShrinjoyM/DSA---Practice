#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1,j;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
         i++;
    }
    return 0;
}
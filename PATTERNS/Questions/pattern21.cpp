#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1,j,space;
    while(i<=n){
        space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
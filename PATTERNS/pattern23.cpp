#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1,j,space;
    while(i<=n){
        space=i-1;
        while(space>0){
            cout<<" ";
            space--;
        }
        j=1;
        while(j<=n+1-i){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
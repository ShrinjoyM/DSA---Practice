#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1,j,space,side_tri;
    while(i<=n){
        space=n-i;
        while(space>0){
            cout<<" ";
            space--;
        }
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        side_tri=i-1;
        while(side_tri>0){
            cout<<side_tri;
            side_tri--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
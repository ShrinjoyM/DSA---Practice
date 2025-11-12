#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int i=1,j;
    char ch;
    while(i<=n){
        j=1;
        while(j<=n){
            ch='A'+j-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
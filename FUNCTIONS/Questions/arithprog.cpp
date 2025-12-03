#include<bits/stdc++.h>
using namespace std;
int arithprog(int n){
    return (3*n+7);
}
int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    int ans=arithprog(n);
    cout<<"Arithmetic Progression: "<<ans<<endl;
    return 0;
}
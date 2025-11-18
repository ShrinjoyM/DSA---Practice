#include<bits/stdc++.h>
using namespace std;
int decimaltobinary(int n){
    int bit,ans=0,i=1;
    while (n!=0) {
    bit = n % 2;
    n /= 2;
    ans+= bit * i;
    i *= 10;
  }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    if(n>0){
        cout<<decimaltobinary(n);
    }
    else{
        n=;
        int ans=decimaltobinary(n);
        int newAns=ans+1;
        // 2's comp
        //newAns = newAns+1;
        cout << newAns << endl;
    }
    return 0;   
}
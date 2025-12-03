#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    int t1=0,t2=1,t3,i;
    for(i=1;i<n-1;i++){
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    return t3;
}
int main(){
    int n;
    cout<<"Enter the range: ";
    cin>>n;
    int last_term=fib(n);
    cout<<n<<"th term of the fibonacci series is: "<<last_term;
    return 0;
}
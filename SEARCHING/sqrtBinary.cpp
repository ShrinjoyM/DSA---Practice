#include<bits/stdc++.h>
using namespace std;
int sqrt(int n){
    if(n==0 || n==1){
        return n;
    }
    int st=1,end=n/2,ans=-1;
    while(st<=end){
        long long mid=st+(end-st)/2;
        long long sq=mid*mid;
        if(sq==n){
            return mid;
            break;
        }
        else if(sq<n){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    cout<<"Square root of "<<n<<" = "<<sqrt(n);
    return 0;
}
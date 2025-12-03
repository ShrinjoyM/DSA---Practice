#include<bits/stdc++.h>
using namespace std;
int sqrt(int n){
    if(n==0 || n==1){
        return n;
    }
    int st=1,end=n/2,ans=-1;
    while(st<=end){
        long long int mid=st+(end-st)/2;
        long long int sq=mid*mid;
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
double morePrecision(int n,int precision,int sol){
    double factor=1,ans=sol;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int sol=sqrt(n);
    cout<<"Square root of "<<n<<" = "<<morePrecision(n,3,sol);
    return 0;
}
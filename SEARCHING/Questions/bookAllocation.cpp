#include<bits/stdc++.h>
using namespace std;
bool isPossible(int ar[],int n,int std,long long mid){
    int stdCount=1;
    long long sumPage=0;
    for(int i=0;i<n;i++){
        if(mid>=sumPage+ar[i]){
            sumPage+=ar[i];                                   
        }
        else{
            stdCount++;
            if(stdCount>std || ar[i]>mid){
                return false;
            }
            sumPage=ar[i];
        }
    }
    return true;
}
long long bookAllocation(int ar[],int n,int std){
    if(std>n){
        return 0;
    }
    else{
        long long sumPages=0;
        for(int i=0;i<n;i++){
            sumPages+=ar[i];
        }
        long long st=0,end=sumPages,ans=-1;
        while(st<=end){
            long long mid=st+(end-st)/2;
            if(isPossible(ar,n,std,mid)){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
}
int main(){
    int n;
    cout<<"Enter the no.of books: ";
    cin>>n;
    int ar[1000];
    for(int i=0;i<n;i++){
        cout<<"Enter no.of pages in book"<<i+1<<": ";
        cin>>ar[i];
    }
    int std;
    cout<<"Enter the no.of students: ";
    cin>>std;
    int ans=bookAllocation(ar,n,std);
    cout<<ans;
    return 0;
}
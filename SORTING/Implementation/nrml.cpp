#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[7]={9,5,3,7,0,1,4};
    int mid=7/2;
    sort(ar,ar+mid+1);
    for(int i=0;i<7;i++){
        cout<<ar[i]<<" ";
    }
}
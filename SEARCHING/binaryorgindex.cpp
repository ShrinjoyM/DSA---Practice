#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<pair<int,int>> &ar,int n,int key){
    int st=0,end=n-1;
    while (st<=end){
        int mid=st+(end-st)/2;
        if (ar[mid].first==key){
            return ar[mid].second;
        }
        else if (ar[mid].first<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout <<"Enter number of elements: ";
    cin>>n;
    vector<pair<int,int>> ar;
    cout<<"Enter the array elements: "<<endl;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ar.push_back({x, i});
    }
    sort(ar.begin(), ar.end());
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    int originalIndex = binarySearch(ar,n, key);
    if (originalIndex==-1){
        cout<<"Element not found.\n";
    }
    else{
        cout<<"Element found at position: "<<originalIndex+1<<endl;
    }
    return 0;
}
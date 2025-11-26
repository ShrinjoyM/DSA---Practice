#include<bits/stdc++.h>
using namespace std;
int notes(int amt,int ch){
    int calc;
    switch(ch){
        case 1:
            cout<<"No.of 100 notes = "<<amt/100<<endl;
            break;
        case 2:
            cout<<"No.of 50 notes = "<<amt/50<<endl;
            break;
        case 3:
            cout<<"No.of 20 notes = "<<amt/20<<endl;
            break;
        case 4:
            cout<<"No.of 10 notes = "<<amt/10<<endl;
            break;
        default:
            cout<<"Wrong choice."<<endl;
    }
}
int main(){
    int amt;
    cout<<"Enter the amount: ";
    cin>>amt;
    cout<<"Press 1 to know how many 100 notes."<<endl;
    cout<<"Press 2 to know how many 50 notes."<<endl;
    cout<<"Press 3 to know how many 20 notes."<<endl;
    cout<<"Press 4 to know how many 10 notes."<<endl;
    int ch;
    cout<<"Enter your choice: ";
    cin>>ch;
    notes(amt,ch);
    return 0;
}
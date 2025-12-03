#include<bits/stdc++.h>
using namespace std;
int notes(int amt){
    int calc;
    switch(1){
        case 1:
            cout<<"No.of Rs.100 notes = "<<amt/100<<endl;
            amt-=(amt/100)*100;
        case 2:
            cout<<"No.of Rs.50 notes = "<<amt/50<<endl;
            amt-=(amt/50)*50;
        case 3:
            cout<<"No.of Rs.20 notes = "<<amt/20<<endl;
            amt-=(amt/20)*20;
        case 4:
            cout<<"No.of Rs.10 notes = "<<amt/10<<endl;
            amt-=(amt/10)*10;
            break;
    }
}
int main(){
    int amt;
    cout<<"Enter the amount: Rs.";
    cin>>amt;
    notes(amt);
    return 0;
}
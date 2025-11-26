#include<bits/stdc++.h>
using namespace std;
int calculator(int a,int b,int ch){
    int calc;
    switch(ch){
        case 1:
            calc=a%b;
            cout<<"Result- "<<calc<<endl;
            break;
        case 2:
            calc=a/b;
            cout<<"Result- "<<calc<<endl;
            break;
        case 3:
            calc=a*b;
            cout<<"Result- "<<calc<<endl;
            break;
        case 4:
            calc=a+b;
            cout<<"Result- "<<calc<<endl;
            break;
        case 5:
            calc=a-b;
            cout<<"Result- "<<calc<<endl;
            break;
        case 6:
            cout<<"Program Exited."<<endl;
            exit(0);
            break;
        default:
            cout<<"Wrong choice."<<endl;
    }
}
int main(){
    int a,b;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    cout<<"Press 1 for MODULUS.\nPress 2 for DIVISION.\nPress 3 for MULTIPLICATION.\nPress 4 for ADDITION.\nPress 5 for SUBSTRACTION.\nPress 6 to EXIT."<<endl;
    int ch;
    int i;
    for(i=1;i<=1000;i++){
        if(i==1){
            cout<<"Enter your choice: ";
        }
        else{
            cout<<"Enter your choice again: ";
        }
        cin>>ch;
        calculator(a,b,ch);
    }
    return 0;
}
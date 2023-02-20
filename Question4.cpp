// Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers between them.

#include<iostream>
using namespace std;

bool odd(int num){
    if(num%2!=0){
        return true;
    }
    return false;
}

int main(){
    cout<<"------------------------------"<<endl;
    int a;
    cout<<"Enter a starting value: ";
    cin>>a;

    int b;
    cout<<"Enter an ending value: ";
    cin>>b;

    cout<<"The odd number between "<< a <<" and "<< b << " are\n" ;

    for(int i=a;i<=b;i++){
        if(odd(i)){
            cout<< i <<" ";
        }
    }
    cout<<"\n------------------------------"<<endl;
    return 0;
}


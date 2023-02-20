// Q5 - Given two numbers a and b, write a program to print all the prime numbers present between a and b. 

#include <iostream>
using namespace std;
bool prime(int num){
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<"-----------------------------------------------"<<endl;
    int a;
    cout<<"Enter a starting value : ";
    cin>>a;

    int b;
    cout<<"Enter an ending value : ";
    cin>>b;
    
    cout<<"The prime number betwen "<< a << " and "<< b << " are "<<endl;  
    for(int i=a;i<=b;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0; 
    cout<<"-----------------------------------------------"<<endl;
}
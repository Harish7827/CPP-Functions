// Q1 - Write a function to print squares of the first 5 natural numbers.

#include<iostream>
using namespace std;
int square(int number){
    int numSquare = (number * number);
    return numSquare; 
}
int main(){
    cout<<"------------------------------------------------------------"<<endl;
    for (int  i = 1; i <= 5; i++){
        cout<< square(i)<< endl; 
    }
    cout<<"------------------------------------------------------------"<<endl;
    return 0;
}
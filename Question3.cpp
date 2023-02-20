// Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.

#include<iostream>
using namespace std;
bool voterEligibilityChecker(int age){
    if (age >= 18){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout<<"------------------------------------"<<endl;
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(voterEligibilityChecker(age) == true){
        cout<<"You are eligible to vote" <<endl;
    }else{
        cout<<"You are not eligible to vote"<<endl;
    }
    cout<<"------------------------------------"<<endl;
    return 0;
}
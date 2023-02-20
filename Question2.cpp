// Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.

#include<iostream>
using namespace std;
float circle_area(float radius){
    float area = 3.14 * (radius * radius);
    return area; 
}

float circle_circumference(float radius){
    float circumference = 2 * 3.14 * radius;
    return circumference;
}

int main(){
    cout<<"------------------------------------------------------------"<<endl;
    int r;
    cout<<"Enter a radius value: ";
    cin>>r;
    cout<<"The area of circle is "<< circle_area(r)<<endl;
    cout<<"The circumference of circle is "<< circle_circumference(r)<<endl;
    cout<<"------------------------------------------------------------"<<endl;
}
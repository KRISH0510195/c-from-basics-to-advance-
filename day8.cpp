#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
//     int a=20;
//  cout<<"the value of a was = "<<a<<endl;
//  a =30;
//  cout<<"the value of a is = "<<a<<endl;

// constants in c++ +

// in constant variable the value of a cant be multiple it will be constant and fixed 

const float a=10.22;
// / constant is used to make less mistake in our program for misprinting of the value by us 

cout << "The value of constant variable 'a' was : " << a << endl;
// we can not change the value of constant variable using assignment operator (=)
// so if we try to do that then compiler will give an error
// if this line wouldn't be commented then its forms errors due to constant variable 
//  a=12;
// cout<<"the value of a is ="<<a<<endl;

// ************ manipulators in c++ ************

// manipulators are used to display the format of output data 

// int a=3,b=5,c=33;
// cout<<"the value of a without setw is ="<<a<<endl;
// cout<<"the value of b without setw is ="<<b<<endl;
// cout<<"the value of c without setw is ="<<c<<endl;

// setw manipulator with iomanip header file 
 // setw(n) - It sets the width of the field where the next inserted data will
// cout<<endl;
// cout<<"the value of a with setw is ="<<setw(4)<<a<<endl;
// cout<<"the value of b with setw is ="<<setw(4)<<b<<endl;
// cout<<"the value of c with setw is ="<<setw(4)<<c<<endl;

// ************* operator precedence *************


// https://en.cppreference.com/w/cpp/language/operator_precedence  is the site for operators according to priority 
// operators priority and associativity
// int a=4 , b=30 ;
// int c=(a*5)+b;
//  it was with small expression 
// we can also make various data in this operators by going to the web and watching the association of the operator
// cout<<c;
    return 0;
}

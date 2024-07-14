#include<iostream>
using namespace std;

int c=45;
// int c=45 is under global scope 
int main()
{
    // ******built in datatypes*********
    
   /* int a,b,c;
    cout<<"enter the value of a =";
    cin>>a;
    cout<<"enter the value of b=";
    cin>>b;
    c=a+b;
    cout<<"the sum of the int is="<<c;
    cout<<"\n";
    cout<<"the value is "<<endl<<k<<endl<<"the value of c ="<<endl<<c;
    cout<<" the global is "<<::c; */
    // ::c refers to the variable c in the global scope :: it is known as scope resolution operator 

    // now lets make float 
// float k=30.1f;
// to remind c++ compiler that its a float 
// EITHER C++ RUNS IT AS A DOUBLE VARIABLE
// double c=30.1l;
// small L is used for double 

// *******size of variables or float,double and long double literal variables ************************

// from below different thing is done i.e size of variables 
// 
cout<<"TO CHECK THE SIZE OF THE VARIABLES "<<endl;
cout<<endl;
cout<<"the size of 30 is ="<<sizeof(30)<<endl;
cout<<"the size of 30.1 is ="<<sizeof(30.1)<<endl;
cout<<"the size of 30.1f is ="<<sizeof(30.1f)<<endl;
cout<<"the size of 15.1l is ="<<sizeof(15.1l)<<endl;
cout<<"the size of 30.1F is ="<<sizeof(30.1F)<<endl;
cout<<"the size of 30.1L is ="<<sizeof(30.1L)<<endl;
cout<<endl;




// ************* reference variables **************


// already existing variables are used in the program with different names 

//  krishna-krish-sk-krispu
/*
int x=56789;
int y=x;
cout<<"the value of x is ="<<x<<endl;
cout<<"the value of y is ="<<y<<endl;
*/

// **** typecasting ***********

// used for the conversion of the datatypes 

int m=2;
 
cout<<"the value of m is ="<<(float)m;
// we can also write it as in below format 
cout<<"\n";
float omi=3.14;
cout<<"the value of om is ="<<(int)omi;
cout<<"\n";
// we can also write it as in below format 
cout<<"the value of omi is ="<<int(omi);
cout<<"\n";

//  as our practice 
int c= int(omi);
cout<<"the expression is ="<<m+omi<<endl;
cout<<"the expression is ="<<m+int(omi)<<endl;
cout<<"the expression is ="<<m+(int)omi<<endl;

    return 0;
    
}
// 1 <iostream> is a system header file which increase the functionality of the programme
// 2 even "cout" is the functionality of iostream header 
//  there are two types of the header files 

// 1  system header file :- it's comes with or present in the compiler
#include<iostream>
// 2  user defined header file :- it is written by the programmer 
//  #include"this.h"  this is a user defined header file which was created by user
// if this header file is not present in the current directory then it will show the error 

using namespace std;

// for the reference of c++ we can get all header files on this sites 
//  visit on the web-site of cppreference for header files 

int main()
{
    int a=4,b=5;
 cout<<"operators in c++"<<endl;
 cout<<"following are the operators in c++"<<endl;
 cout<<endl;
 cout<<"the integers are 4 and 5 ";
 cout<<endl;
// 1)  Arithmetic operator 
cout<<"by arithmetic operator"<<endl;
cout<<"\n";
cout<<"the value of a+b is = "<<a+b<<endl;
cout<<"the value of a-b is ="<<a-b<<endl;
cout<<"the value of a*b is ="<<a*b<<endl;
cout<<"the value of a/b is ="<<a/b<<endl;
// result is integer in it where 0.8 is og ans but 0 is the ans 
// cause arithmetic operation between two integer is integer ***rule***
cout<<"the value of a%b is ="<<a%b<<endl;
// 
cout<<"the value of a++ is ="<<a++<<endl;
// increment by 1 after printing a=4
// a++ value will be used in a-- where a=5
cout<<"the value of a-- is ="<<a--<<endl;
// decrement by 1 after printing a=5
cout<<"the value of ++a is ="<<++a<<endl;
// here a=4 cause a-- operator and 1 increment before printing therefore a=5 will be printed
cout<<"the value of --a is ="<<--a<<endl;
// here a=5 due to ++a and 1 before printing therefore a=4 will be printed
cout<<"\n";
cout<<"all the above were the the calculation of arithmetic operator  "<<endl;

cout<<"\n";

// 2) assignment operators : used to assign the values of two or more variables 
//    examples: int a=4,b=5
cout<<"\n";

// 3) comparision operator: this operator used to compare two or more values 
cout<<"following are the types of comparision operator"; 
cout<<endl;
// from here if the condition is true then it will print 1
// if the condition is false then it will print 0
// a=4 and b=5
cout<<"the value of a==b is ="<<(a==b)<<endl;
cout<<"the value of a!=b is ="<<(a!=b)<<endl;
cout<<"the value of a>=b is ="<<(a>=b)<<endl;
cout<<"the value of a<=b is ="<<(a<=b)<<endl;
cout<<"the value of a<b  is ="<<(a<b)<<endl;
cout<<"the value of a>b  is ="<<(a>b)<<endl;
cout<<"\n";
cout<<"all the above are the comparision operators"<<endl;
cout<<"\n";

// 4) logical operator: used to compare the two expression of comparision operator 

cout<<"following are the types of logical operator"<<endl;
// all types of operator 
cout<<endl;
cout<<"logical AND operator ((a ==b)&&(a<b)) is ="<<((a==b)&&(a<b))<<endl;
// logical and operator &&
// where data type and operators are under parasynthesis ((  )&&())
cout<<"logical or operator ((a==b)||(a<b))  is  ="<<((a==b)||(a<b))<<endl;
// logical OR operator ||
cout<<"logical not operator (!(a==b))        is ="<<(!(a==b))<<endl;
// logical not operator !

 return 0;
}

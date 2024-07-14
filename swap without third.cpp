#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cout<<"enter two numbers "<<endl;
    cin>>x>>y;

    cout<<"the numbers before swapping"<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;

x=x+y;
y=x-y;
x=x-y;

//  by using third variable 
// c=y;
// x=y;
// y=x;

cout<<"the numbers after swapping"<<endl;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;

    return 0;

}
#include<iostream>
using namespace std;
int fact(int n);  //function to calculate the number of bits in a decimal representation of n.
int main()

{
    int a,b;

    cout<<"enter the number =";
    cin>>a;

    b=fact(a);

    cout<<"\n the factorial is = "<<b;
   
    return 0;
}

//In this program we are trying to find out the number of bits used by a particular integer 'a'. To do so, we use a

//this program calculates the bitwise AND and OR operation between two numbers.
int fact(int n)
{   
    int i=1;int f=1;   //initializing variables f and i with 1

    for(i=1;i<=n;i++)  //calculating the factorial using loop
    {
        f=f*i;
    }

    return f;
}
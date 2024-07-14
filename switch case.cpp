#include<iostream>
using namespace std;
int main()
{
    int a,b,c,ch;

    
    while (1)
    {
    cout<<"1.addition\n2.subtraction\n3.multiplication\n4.division \n"; cout<<"Enter the your choice  ";
    cin>>ch;
    
    cout<<"Enter the first number  ";
    cin>>a;
    cout<<"Enter the second number  ";
    cin>>b;
switch (ch)
{

case 1:c=a+b;
cout<<"\nThe sum is "<<c<<endl;
break;

case 2: c=a-b;
cout<<"the subtraction is ="<<c<<endl;
break;

case 3: c=a*b;
cout<<"thr multiplication is ="<<c<<endl;
break;

case 4: c=a/b;
cout<<"the division is ="<<c<<endl;
break;

default :
cout<<"Wrong input";
}
}

return 0;
}
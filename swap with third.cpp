#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
while (1)
{
    cout<<"enter the two numbers  "<<endl;
    cin>>a>>b;
   

    cout<<"numbers before swapping  "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    c = a;
    a=b;
    b=c;

    cout<<"numbers after swapping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

} 

    return 0;

}
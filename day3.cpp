#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    while(1){

    cout<<"ENTER THE FIRST NUMBERS = ";
    cin>>a;
    cout<<"ENTER THE SECOND NUMBERS = ";
    cin>>b;

    c=a+b;
    // no need of something else
    //for sum with single line comment 

    /* like this we can perform 
    many task of the arithmetic operations using multi line 
    comments 
    */

//    press ctrl & / for commenting the required line 
    cout<<"the sum of the number is "<<c<<endl;

    cout<<"do want to perform again"<<endl;

    }
    cout<<"press 1 for yes and 0 for no"<<endl;
    int n;
    cin>>n;
    if(n==0){
        cout<<"Thanks for coming . Have a nice day ";
        break;
        }


    return 0;


}

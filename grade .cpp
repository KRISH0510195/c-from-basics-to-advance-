#include<iostream>
using namespace std;
int main()
{
    for{
    int a;
    
    cout<<"enter the total marks"<<endl;
  
cin>>a;

if(a>=90)
cout<<"A+ Grade "<<endl;
else if (a<90 && (a>60))
cout<<"A Grade"<<endl;

else
cout<<"keep working"<<endl;
    
return 0;
    }
}
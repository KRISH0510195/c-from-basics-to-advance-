#include<iostream>
using namespace std;

int main()
{
    int i,j;

for(i=1;i<=5;i++)

{
    for(j=1;j<=i;j++)
    {
cout<<"*";  //prints a star followed by space
    }

     cout<<"\n";   //goes to the next line after each row is printed
}

return 0;
}
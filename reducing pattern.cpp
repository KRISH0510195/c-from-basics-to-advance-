#include<iostream>
using namespace std;
int main()
{
    int i,j;

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        
        //cout << endl;   //This line is not needed as the loop below does that.
        cout << "\n";     //This line adds a new line after each row of stars.
    }
    return 0;
}

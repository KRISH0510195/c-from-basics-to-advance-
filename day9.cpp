#include<iostream>
using namespace std;
int main()
{
// cout<<"hello world";
// writing a simple string 

// **********three basic control structure ***************
/* 1)sequental structure  : it is the default flow of program.
   2)selection structure 
   - if else statement      (conditional)
    - switch case            (conditional with multiple conditions)
   3) iteration structure    (repeating a block of code )
   - while loop             (executes as long as condition becomes true)
   - do while loop          (executes at least once and then checks the condition)
   - for loop               (initialization,condition,increment/decrement)
*/

//  ********selection control structures if-else-if-else ladder  *****************
int age;
cout<<"enter your age \n="; 
cin>>age;


// if((age<18) && (age<0))
// logical and opeartor will be used to check both the condition simultaneously age<18) && (age<0)) this both condition 
//  {
//     cout<<"you are not eligible for voting";
//     this will be checked first 
// }
// else if(age==18){ 
//   this will be checked secondly if first one is incorrect 
//     cout<<"you are eligible for voting but as a kid ";
// }
// else if(age<1){
//     cout<<"you are not yet born";
// }
// else{
//       this condition will be checked if both of above condition are false 
//     cout<<"you are suitable for voting";
// }

// ******** sequentle control structure *********
switch (age)
{

// whatever we will select according to case it will show output on the basis of case data 

//  break statement is used to break the one condition 
// if ones statement is true and stop the function either jump to next 

case 1: 
cout<<"you are good\n";
    break;
case 2:
cout<<"you are better\n";
break;
case 3:
cout<<"you are excellent\n";
break;
default:
cout<<"you are in work\n";
    break;
}

    return 0;

}
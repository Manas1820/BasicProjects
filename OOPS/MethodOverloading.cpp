/*  Header File */
#include<iostream>

/* author name : Manas Gupta
Reg no: 19BBS0121
Description : Method overloading using a function doMath and doAdvancedMath
*/

using namespace std;

/* class */
class Calculator
{
  public :
  
  /*Declaration of function doMath */
  
 int doMath(int a ,int b,int flag )
  {
      if(flag==1)
       return a+b;
      else if(flag==2)
       return a-b;
      else if(flag==3)
       return a*b;
  }
 double doMath(double a ,double b,double flag )
  {
      if(flag==1)
       return a+b;
      else if(flag==2)
       return a-b;
      else if(flag==3)
       return a*b;
  }
  
  /*Declaration of function doAdvancedMath */
  
 int doAdvancedMath(int a ,int flag )
  {
      int n=a*(a+1)/2;
      if(flag==1)
        return a*a;
      if(flag==2)
       return n ;
  }
double doAdvancedMath(double a ,double flag )
  {
      float n=a*(a+1)/2;
      if(flag==1)
        return a*a;
      else if(flag==2)
       return n ;
  }
  
};

//driver code

int main()
{
/*creating an object of class Calculator */
Calculator calc;
/*setting the precision to 10*/
cout.precision(10);
/*input for do math */
int a1,b1,flag1;
cin>>a1>>b1>>flag1;
double a2,b2,flag2;
cin>>a2>>b2>>flag2;
/*input for doAdvancedmath */
int a3,flag3;
cin>>a3>>flag3;
double a4,flag4;
cin>>a4>>flag4;
/*Output for the respective input */
cout<<calc.doMath(a1,b1,flag1)<<endl;
cout<<calc.doMath(a2,b2,flag2)<<endl;
cout<<calc.doAdvancedMath(a3,flag3)<<endl;
cout<<calc.doAdvancedMath(a4,flag4)<<endl;
return 0;
}
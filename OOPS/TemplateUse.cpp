#include <iostream>
/*
Author Name: Manas Gupta
Date Modified :1/12/2020
Description :Use of --- Template --- to implement all kind of data type using a single function 
*/
using namespace std;
class Calculator
{   
public:    
template <class T,class U>
/* auto function is a feature in c++14 version which identifies the return type on its own */   
auto addNumber(T a,U b)   //To add two number
{
    return a + b;
}
template <class T,class U>
auto multiplyNumber(T a,U b)   //To multiply two munber
{
    return a * b;
}
template <class T,class U>
auto devideNumber(T a,U b)    //To devide two number 
{
    return a/b;
}
template <class T,class U>
auto subtractNumber(T a,U b)  //To subtract two number   
{
    return a-b;
}
};

// driver code

int main()
{
    Calculator demo;
    cout.precision(10);
    /* To add two integer type numbers */
    cout<<demo.addNumber(15,16)<<endl;
    /*To add thwo type of float numbers  */
    cout<<demo.addNumber(15.10,16.57)<<endl;
    /*To add two strings feature avaible only in  --- c++ versions ---  **will not work for any other operator**  */
    cout<<demo.addNumber(string("Manas"),string("Gupta"))<<endl;
    /* To add a float number and integer number*/
    cout<<demo.addNumber(15,16.57)<<endl;
    /* To subtract two ineger numbers*/
    cout<<demo.subtractNumber(15,16)<<endl;
    /* To subtract two float numbers*/
    cout<<demo.subtractNumber(15.10,16.57)<<endl; 
    /* To multiply a double number and integer number with precision 10 */
    cout.precision(10);
    cout<<demo.multiplyNumber(15,16.572345647)<<endl;
    return 0;
}
/* Name : MANAS GUPTA 
   Date Modified :19BBS0121
   Description : it is a basic program to show how to encapsulate the dtat using class
*/
#include<iostream>
#include<string> //header files
using namespace std;
class Insurance
{
float amount;
string carNumber,carBrand;
string clientName;
int accountNumber;
public:
Insurance ()     //DEFAULT CONSTRUCTOR
{
    this->amount=5000.5;
    this->carNumber="21DL45MSD1001";
    this->carBrand="MARUTI";
    this->accountNumber=12345678;
}
Insurance (float amount,string clientName)   //PARAMETERIZED CONSTRUCTOR
{
    this->amount=amount;
    this->clientName=clientName;
}
void askAmount()
{
    float insuranceAmount;
    cout<<"ENETR THE AMOUNT WHICH YOU WANT TO ALOT FOR INSURANCE :";
    cin>>insuranceAmount;
    cout<<endl;
    setAmount(insuranceAmount);
}
void setAmount(float amount) //SET THE AMOUNT OF INSURANCE
{
  this->amount=amount;    
}
float getAmount()
{
    return this->amount;
}
void setCarNumber(string carNumber)//SET THE CAR NAME 
{
    this->carNumber=carNumber;
}
string getCarNumber()
{
    return this->carNumber;
}
void setCarBrand(string carBrand)
{
    this->carBrand=carBrand;
}
string getCarBrand()
{
    return this->carBrand;
}
void getClientName(string clientName)
{
    this->clientName=clientName;
}
string getClientName()  //TO SET NAME OF THE CLIENT FOR CREATING A PROFILE
{
    return this->clientName;
}
void getClientAccountNumber(int accountNumber)//TO SET THE ACCOUNT NUMBER BY THE USER
{
    this->accountNumber=accountNumber;
}
int getClientAccountNumber()
{
    return this->accountNumber;
}

int getTime()        // THIS IS TO ALOT THE TIME PERIOD OF INSURANCE FOR THE USER acoording to compny GUIDLINES
{
    if(this->amount<=5000.0)
     return 5;
    else if(this->amount>5000) 
    return 20;
}
};
int main()
{
    Insurance coustmer,coustmer1(6000.99,"MANAS GUPTA");
    coustmer.askAmount();
    cout<<coustmer.getAmount()<<endl;        
    cout<<coustmer1.getAmount()<<endl;     //EXAMPLE FOR PARAMETERISED CONSTRUCTOR
    cout<<coustmer.getCarNumber()<<endl;   //EXAMPLE FOR DEFAULT CONSTRUCTOR
    cout<<coustmer.getCarBrand()<<endl;    //EXAMPLE FOR DEFAULT CONSTRUCTOR
    cout<<coustmer1.getClientName()<<endl;  //EXAMPLE FOR PARAMETERISED CONSTRUCTOR
    cout<<coustmer.getClientAccountNumber()<<endl;  //EXAMPLE FOR DEFAULT CONSTRUCTOR
    cout<<coustmer1.getTime()<<" years"<<endl;
    return 0;
}

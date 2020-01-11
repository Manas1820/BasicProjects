/*
Activity: Create a class "Banking" with following,

Data members

balance
totalBalance (static variable)
Member Functions

Constructor for Initializing default balance amount Rs. 1000 for every new account holder.
depositAmount(float amount) for depositing the amount into an account.
Testing Script

Create a main function with three objects named "guruAccount", "balaAccount", "antAccount" and deposit some money using member function and display each object account balance and total bank balance.

Sample Input:

balaAccount.depositAmount(1400)

guruAccount.depositAmount(2200)

antAccount.depositAmount(3150)

Sample Output:

Bala Account balance = 2400

Guru Account balance = 3200

Ant Account balance = 4150

Total Bank Balance = 9750

*/

#include<iostream>
using namespace std;
/*
Author Name : Manas Gupta
Discription : Use of static variable 
Date Modified :07/01/2020    
*/



class Banking
{
    float balance;
    public :
    Banking ()
    {
        this->balance=1000.0;
    }
    static float totalBankBalance;
    void depositAmount(float amount)
    {
       this->balance=this->balance+amount;
       Banking::totalBankBalance = Banking::totalBankBalance + this->balance;
    }
    float getBalance()
    {
        return this->balance;
    }
    
};

float Banking::totalBankBalance=0;   // Initializing the value of static variable

// driver code

int main()
{
    Banking guruAccount,balaAccount,antAccount;
    guruAccount.depositAmount(1400.0);
    balaAccount.depositAmount(2200.0);
    antAccount.depositAmount(3150.0);
    
    cout<<"GURU ACCOUNT BALANCE : "<<guruAccount.getBalance()<<endl;
    cout<<"BALA ACCOUNT BALANCE : "<<balaAccount.getBalance()<<endl;
    cout<<"ANT ACCOUNT BALANCE : "<<antAccount.getBalance()<<endl;
    
    cout<<"TOTAL BANK BALANCE :"<<Banking::totalBankBalance;
    return 0;
}

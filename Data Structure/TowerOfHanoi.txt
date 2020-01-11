/*
Author Name: Manas Gupta
Date :28/12/2019
Description :Tower of Hanoi is a mathematical puzzle where we have three rods and n disks
*/
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char fromRod,char toRod,char tempRod)
{
if(n==1){ cout<<"Move Disk "<<n<<" From Rod "<<fromRod<<" To Rod "<<toRod<<endl; return; }
towerOfHanoi(n-1,fromRod,tempRod,toRod);
cout<<"Move Disk "<<n<<" From Rod "<<fromRod<<" To Rod "<<toRod<<endl;
towerOfHanoi(n-1,tempRod,toRod,fromRod);   // Using  Reccursion
}


//Driver Code

int main()
{
    towerOfHanoi(8,'A','B','C'); 
    return 0;
}
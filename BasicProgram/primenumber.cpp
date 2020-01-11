/*
 
                                  QUESTION :
You are given an integer N. You need to print the series of all prime numbers till N.

Input Format

The first and only line of the input contains a single integer N denoting the number till where you need to find the series of prime number.

Output Format

Print the desired output in single line separated by spaces.

*/

#include<iostream>
#include<cstring>
/*
Author Name: Manas Gupta
Date Modified :1/11/2020 
Description: To get all the prime number before a specific value
*/
using namespace std;
 
void prime_number(int limit)
{
    bool mark[limit];                   
    memset(mark, true, sizeof(mark));    // To set every value to a specific value
    for (int p=2; p*p<limit; p++)
    {
        // If p is not changed, then it is a prime
        if (mark[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }

    for (int p=2; p<limit; p++)
        if (mark[p] == true)
            cout << p << "  ";
}
// driver code

int main()
{
int i=20;
prime_number(i);
return 0;
}
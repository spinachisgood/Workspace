/* 
Source : https://projecteuler.net/problem=1
Task : Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include<iostream>
using namespace std;
int multiples()
{
    int sum =0;
    for(int i=0;i<1000;i++){

        if(i%3==0)
        {
            sum+=i;
        }
        else if(i%5==0)
        {
            sum+=i;
        }
    }
    cout<<sum;
    return sum;
}
int main()
{
    return multiples();
}

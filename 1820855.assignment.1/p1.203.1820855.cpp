#include <iostream>
using namespace std; 
 
int primecheck(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primecheck(num, i - 1);
       }       
    }
}
 
int main()
{
    int num, counter;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    counter = primecheck(num, num / 2);
    if (counter == 1)
    {
        cout<< num <<" is a prime number"<<endl;
    }
    else
    {
        cout<< num << " is not a prime number " << endl;
    }
    return 0;
}
 


#include <iostream>
using namespace std;


int any_fibo(int a, int b, int n)
{
if (n == 1) {
        return a;
    }
    
if (n == 2) {
        return b;
    }
else{
    return any_fibo(a, b, n - 1) + any_fibo(a, b, n - 2);
}
}
int main()
{
	cout<<"Enter the first Fibonacci number: ";
	int x;
	cin>>x;
cout<< "Enter the second Fibonacci number: ";
int y;
cin>>y;

cout<<"Enter the position of the desired Fibonacci number: ";
int N;
cin>>N;
cout<<"The Fibonacci number at position"<< N <<"is: "<<any_fibo(x,y,N)<<endl;
    return 0;
}

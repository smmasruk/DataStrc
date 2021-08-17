#include<iostream>
using namespace std;
int gcd(int* a, int* b)
{
    if (*b == 0){
        return *a;
        }
        *a=*a % *b;
    cout<<b<<"."<<a<<"."<<*a<<"."<<*b<<endl;
    return gcd(b, a);
    
     
}



int main() {


int a,b;
cin>>a>>b;

cout<<gcd(&a,&b)<<endl;
return 0;


}

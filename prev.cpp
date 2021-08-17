
#include <iostream>
using namespace std;

void reverse(int* k) {
int num= *k;
int temp=0; 
int sum=0;

while(num!=0){
temp = num%10;
sum=sum*10+temp;
num=num/10;
}
cout<<sum<<endl;
}


int main()
{
cout<<"enter a number"<<endl;
int n; 
cin>>n;

reverse(&n);

return 0;
}

#include<iostream>
using namespace std;
void binaryconv(int n){
	if(n != 0){
		int r = n%2;
		int d = n/2;
		binaryconv(d);
		cout<<r;}
}
int main(){
cout<< "Enter a number: "<<endl;
int x;
cin>>x;
cout<<"The number in binary is: ";
binaryconv(x);
cout<<endl;
return 0;
}

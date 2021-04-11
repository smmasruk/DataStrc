#include<iostream>
using namespace std;
int even_digits(int n){
if (n == 0){
	return 0;
	}
else if (n%2 == 0){
		return even_digits(n/10)*10 + n%10;
	}
else if (n%2 != 0){
		return even_digits(n/10);
	}
else{
	return 0;}
	
}


int main(){
cout<<"Enter a possitive number: ";
int x;
cin>>x;
cout<<"Even digits of the number are: "<<even_digits(x)<<endl;
return 0; 
}

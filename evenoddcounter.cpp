#include<iostream>
using namespace std;
int main(){
	int a;
	int i;
	cout << "Enter array size"<<endl; 
	cin>> a;
	int p;
	int arr[a];
	cout<<"Input the array entry "<<endl;
	for (i=0;i<=a;i++){
		cin>>p;
		arr[i]=p;
		}
	int ec=0;
	int oc=0;
	for(int i=0; i<=a; i++){
		if (arr[i]%2==0){
		ec=ec+1;}
		else {
		oc=oc+1;}
	}
	cout <<"# even = "<< ec <<endl<<" # odd = " << oc <<endl;
	return 0;
	}

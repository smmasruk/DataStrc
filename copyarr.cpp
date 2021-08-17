#include<iostream>
using namespace std;
int main(){
	int a;
	int i;
	cout << "Enter array size"<<endl; 
	cin>> a;
	int p;
	int arr[a];
	int copy[a];
	cout<<"Input the array entry "<<endl;
	for (i=0;i<=a;i++){
		cin>>p;
		arr[i]=p;
		}

	
	for(int i=0; i<=a; i++){
		copy[i]=arr[i];	}

	cout<<"copied array is: ";
	for(int i=0; i<=a; i++ ){

		cout<<copy[i]<<",";
	}
	cout<<endl;
	return 0;
	}

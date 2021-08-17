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

	int det;
	cout<< "enter the element you want to delete" << endl;
	cin >> det;
	int count=0;
	for(int i=0; i<=a; i++){
		if(arr[i]==det)
			arr[i]={};
			count=count+1;}
				 
		if (count==0){
		cout<<"element not found"<<endl; 
		}
		else{
		cout <<"successfully deleted " << endl; 
		 for(int i=0; i<=a; i++){
		  cout <<arr[i]<<endl; 
		}
			}
		return 0; 
	} 

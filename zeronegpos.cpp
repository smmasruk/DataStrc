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
		cout<<arr<<endl; 
	int pc=0;
	int nc=0;
	int zc=0;
	for(int i=0; i<=a; i++){
		if (arr[i]==0){
		zc=zc+1;}
		else if (arr[i]<0) {
		nc=nc+1;}
		else{
		pc=pc+1;}
	}
	cout <<"# +ve = "<< pc <<endl<<" # -ve = " << nc <<endl<<"# o = "<< zc<<endl;
	return 0;
	}

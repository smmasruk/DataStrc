//second height number in array . 
#include<iostream>
using namespace std;
int main(){
	int a;
	int i;
	cout << "Enter array size"<<endl; 
	cin>> a;
	int p;
	int arr[a];
	for (i=0;i<=a;i++){
		cin>>p;
		arr[i]=p;
		}
	int m=arr[0];
	int n=arr[0];
	int sl;
	for (i=0;i<a;i++){
		if(arr[i]>m){
		sl=m;
		 m=arr[i];
		 }
		 else if(arr[i]<n){
		 n= arr[i];}
		
		}
cout<<"maximim number is "<<m<<endl<<"minimum number is "<< n<<endl;		
cout<<"secound heighest numeber is " <<sl<<endl;
return 0;
}

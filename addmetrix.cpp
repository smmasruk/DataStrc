#include<iostream>
using namespace std;
int main(){
	int i,j,r,c;
	int arr1[r][c],arr2[r][c],add[r][c];
	cout<<"Enter the row number "<<endl;
	cin>>r; 
	cout<<"Enter the colum number "<<endl;
	cin>>c;
	cout<<"Enter the element of the first  Metrix"<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		cin>>arr1[i][j];
		}
	cout<< arr1[i][j]<<" "<<endl;
	}
	return 0;
}

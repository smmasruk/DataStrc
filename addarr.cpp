#include<iostream>
using namespace std;
int main(){
	int i,j,r,c;
	
	cout<<"Enter the row number "<<endl;
	cin>>r; 
	cout<<"Enter the colum number "<<endl;
	cin>>c;
	int arr1[r][c];
	int arr2[r][c], add[r][c];
	cout<<"Enter the element of the first  Metrix"<<endl;
	for(int i=0; i<r;i++){
		for(int j=0;j<c;j++){
		cout<<" ";
		cin>>arr1[i][j];
		}	
	}
	cout<<"First  Metrix is : "<<endl;
for(int i=0; i<r;i++){
		for(int j=0;j<c;j++){
		
		cout<<arr1[i][j]<<" ";
		}
		cout<<endl;	
	}

	cout<<"Enter the element of the second  Metrix"<<endl;
	for(int i=0; i<r;i++){
		for(int j=0;j<c;j++){
		cout<<" ";
		cin>>arr2[i][j];
		}	
	}
	cout<<"2nd  Metrix is : "<<endl;

for(int i=0; i<r;i++){
		for(int j=0;j<c;j++){
		
		cout<<arr2[i][j]<<" ";
		}
		cout<<endl;	
	}
	for(int i=0; i<r;i++){
		for(int j=0;j<c;j++){
		add[i][j]=arr1[i][j] + arr2[i][j];
		}	
	}

	cout<<"Sum of the metrics are  : "<<endl;
for(int i=0; i<r;i++){
		for(int j=0;j<c;j++){
		
		cout<<add[i][j]<<" ";
		}
		cout<<endl;	
	}
	return 0;
}

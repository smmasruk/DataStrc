#include<iostream>
using namespace std;
int main(){
	int i,j,r1,r2,c1,c2;
	
	cout<<"Enter the row number of 1st metrix "<<endl;
	cin>>r1; 
	cout<<"Enter the colum number of 1st metrix"<<endl;
	cin>>c1;
	cout<<"Enter the row number of 2nd metrix "<<endl;
	cin>>r2; 
	cout<<"Enter the colum number of 2nd metrix"<<endl;
	cin>>c2;
	if(c1!=r2){
	cout<<"Invalid input"<<endl;
	}
	else{
	int arr1[r1][c1];
	int arr2[r2][c2] ;
	int mul[r1][c2]={};
	cout<<"Enter the element of the first  Metrix"<<endl;
	for(int i=0; i<r1;i++){
		for(int j=0;j<c1;j++){
		cout<<" ";
		cin>>arr1[i][j];
		}	
	}
	cout<<"First  Metrix is : "<<endl;
for(int i=0; i<r1;i++){
		for(int j=0;j<c1;j++){
		
		cout<<arr1[i][j]<<" ";
		}
		cout<<endl;	
	}

	cout<<"Enter the element of the second  Metrix"<<endl;
	for(int i=0; i<r2;i++){
		for(int j=0;j<c2;j++){
		cout<<" ";
		cin>>arr2[i][j];
		}	
	}
	cout<<"2nd  Metrix is : "<<endl;

for(int i=0; i<r2;i++){
		for(int j=0;j<c2;j++){
		
		cout<<arr2[i][j]<<" ";
		}
		cout<<endl;	
	}
	
	

	cout<<"multiplications of the matrices are   : "<<endl;
for(int i=0; i<r1;i++){
		for(int j=0;j<c2;j++){
			for(int k=0; k<c1;k++){
			mul[i][j]=mul[i][j]+arr1[i][k]*arr2[k][j];
			}
		
	}}
	for(int i=0; i<r1;i++){
		for(int j=0;j<c2;j++){
		cout<<mul[i][j]<<" ";
				
		}
		cout <<endl; 
		}
}	


return 0;
}

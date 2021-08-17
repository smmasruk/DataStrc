#include<iostream>
using namespace std;
int main(){
int x=3;
int *y=&x;
int *k=y;
 cout<<y<<endl; 
 cout<<x<<endl;
 cout<<k<<endl; 
 cout<<*y<<endl; 
 cout<<*k<<endl; 
 int a= 500;
 cout<<sizeof a<<endl;
 int b= 100000;
 cout<<sizeof a<<endl;
 return 0;


}

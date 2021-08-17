
#include <iostream>
using namespace std;

void reverse(int num) {
if(num>0){
	cout<<num%10;
	reverse(num/10);

}
else cout<<endl;
}

int main()
{
cout<<"enter a number"<<endl;
int n; 
cin>>n;

reverse(n);

return 0;
}

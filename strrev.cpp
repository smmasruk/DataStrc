#include <iostream>
#include <string>
using namespace std;
void revstr( string* b){
char d;
for(int i=0; i<(*b).size()/2; i++){
d=(*b)[i];
(*b)[i]=(*b)[(*b).size()-i-1];
(*b)[(*b).size()-i-1]=d;
} 
cout<<*b<<endl;
}
int main()
{
string x;
cin>>x;
revstr(&x);
return 0;
}

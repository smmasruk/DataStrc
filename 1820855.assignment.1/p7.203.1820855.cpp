#include<iostream>
#include<string>

using namespace std; 
bool isPalindrome(string str, int a , int b){
if(b!=0 && str[a]==str[b]){

return 1;
return isPalindrome(str, a+1, b-1);
}
else {
	return 0;
	}
}


int main(){
cout<<"Enter a word: ";
string a;
cin>>a;

int s = a.size();


cout<< isPalindrome(a,0, s-1)<<endl;

 
return 0;
}

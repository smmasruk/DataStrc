#include <iostream>
using namespace std;
int sumNnum(int n) {
    if (n != 0){
        return n + sumNnum(n - 1);
    }
    else{
        return n;
}
}

int main() {
    int x;
   cout<<"Enter a positive integer: ";
   cin>> x;
   cout<<"Sum is : "<< sumNnum(x)<< endl;
    return 0;
}



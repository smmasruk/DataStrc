#include <iostream>

using namespace std;
int GCD(int a, int b) {
    if (b != 0){
        return GCD(b, a % b);}
    else{
        return a;
 }
        }
int main() {
    int x;
    
    cout << "Enter 1st number: ";
   cin>> x;
   cout <<endl;
    cout << "Enter 2nd number (less than 1st one): ";
    int y;
    cin>> y;
    cout << endl;
    cout<< "G.C.D is: " << GCD(x,y)<<endl;
    return 0;
}


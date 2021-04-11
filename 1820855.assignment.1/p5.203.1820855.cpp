#include <iostream>
using namespace std;

int Power(int b, int tp)
{
    if (tp!= 0){
        return (b* Power(b, tp-1));
    }
    
    else{
    return 1;
    }
}

int main()
{
    int b;

    cout << "Enter base number: ";
    cin >> b;

    cout << "Enter power (+ve) : ";
    int tp;
    cin >> tp;

    cout<< Power(b,tp)<<endl;
    
        return 0;
}



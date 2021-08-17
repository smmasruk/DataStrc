//Single Element

#include <iostream>

using namespace std;

struct rectangle
{

    float height;

    float width;
};

void setLengthWidth(rectangle r[], int n)
{
    cout << "Incert height" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> r[i].height;
        cout << "Incert width" << endl;
        cin >> r[i].width;
    }
}

void getArea(rectangle r[], int n)
{

    cout << r.height * r.width << endl;
}

int main()
{

    rectangle r[3];

    setLengthWidth(r, 3);

    getArea(r, 3);

    return 0;
}

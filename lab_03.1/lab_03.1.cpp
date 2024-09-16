#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Enter x:";
    cin >> x;
    y = (x * x) / (2.1 + sin(abs(x)));
    if (x <= -5) {
        y += (1.0 / tan(exp(x))); //           1.0 / tan() = ctg()
    }
    if (-5 < x < 0) {
        y += 2 - ((x * x * x) / (abs(x) + 1));
    }
    if (x >= 0) {
        y += log(sqrt(abs(x) - (x * x) / (2)));
    }
    cout << "y = " << y << endl;
    /////////////////////////////////////////////////////
    /////////////////////////////////////////////////////
    y = (x * x) / (2.1 + sin(abs(x)));
    if (x <= -5) {
        y += (1.0 / tan(exp(x)));
    }
    else {
        if (-5 < x < 0) {
            y += 2 - ((x * x * x) / (abs(x) + 1));                      
        }
        else {
            y += log(sqrt(abs(x) - (x * x) / (2)));
        }
    }
    cout << "y = " << y << endl;
    system("pause");
}
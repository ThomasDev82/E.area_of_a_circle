#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    // your code.

    double r, area ;

    cin >> r;

    area = 3.141592653 * r * r ;

    cout << area << endl;
}

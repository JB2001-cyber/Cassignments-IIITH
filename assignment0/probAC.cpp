#include <iostream>
using namespace std;
int main()
{
    int iniAm;
    cout << "Enter the amount borrowed : ";
    cin >> iniAm;
    float r;
    r = 0.1;
    int years;
    cout << "Enter the number of years : ";
    cin >> years;
    float resAm;
    resAm = (float)(iniAm * r * years) + iniAm;
    int num2000;
    num2000 = resAm / 2000;
    resAm = resAm - num2000 * 2000;
    int num100;
    num100 = resAm / 100;
    resAm = resAm - num100 * 100;
    int num50;
    num50 = resAm / 50;
    resAm = resAm - num50 * 50;
    int num10;
    num10 = resAm / 10;
    resAm = resAm - num10 * 10;
    cout << num2000 << " " << num100 << " " << num50 << " " << num10 << endl;
}
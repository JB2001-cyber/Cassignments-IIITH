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
    int resAm;
    resAm = (float)(iniAm * r * years) + iniAm;
    // cout << "Amount to be paid back : " << resAm << endl;
    //Now the denominations
    //10, 50, 100, 2000
    int num2000;
    num2000 = resAm / 2000;
    // cout << "Number of 2000 notes : " << num2000 << endl;
    resAm = resAm - num2000 * 2000;
    // cout << "Now the res amount is : " << resAm << endl;
    int num100;
    num100 = resAm / 100;
    // cout << "Number of 100 notes : " << num100 << endl;
    resAm = resAm - num100 * 100;
    // cout << "Now the res amount is : " << resAm << endl;
    int num50;
    num50 = resAm / 50;
    // cout << "Number of 50 notes : " << num50 << endl;
    resAm = resAm - num50 * 50;
    // cout << "Now the res amount is : " << resAm << endl;
    int num10;
    num10 = resAm / 10;
    // cout << "Number of 10 notes : " << num10 << endl;
    resAm = resAm - num10 * 10;
    // cout << "Now the res amount is : " << resAm << endl;
    cout << num2000 << " " << num100 << " " << num50 << " " << num10 << endl;
}
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int l1, u1, l2, u2;
    float T;
    cout << "Enter l1 : ";
    cin >> l1;
    cout << "Enter u1 : ";
    cin >> u1;
    cout << "Enter l2 : ";
    cin >> l2;
    cout << "Enter u2 : ";
    cin >> u2;
    cout << "Enter T : ";
    cin >> T;
    float res;
    res = ((float)(u2 - l2) / (u1 - l1)) * T + l2;
    // cout << setprecision(2);
    cout << "The resultant temperature is : " << res << endl;
    // printf("%0.2f", res);
}
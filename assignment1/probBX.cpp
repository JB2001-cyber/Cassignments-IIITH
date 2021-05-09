#include <iostream>
using namespace std;
int main()
{
    long long n, x, y;
    cin >> n >> x >> y;
    //converting to decimal
    long dec;
    int a;
    int i = 0, j;
    long m;
    while (n)
    {
        a = n % 10;
        for (j = 0; j < i; j++)
        {
            a *= x;
        }
        m += a;
        n = n / 10;
        i++;
    }
    int b = m;
    m = 0;
    i = 0;
    long c;
    while (b)
    {
        c = b % y;
        for (j = 0; j < i; j++)
        {
            c *= 10;
        }
        m += c;
        b = b / 10;
        i++;
    }
    cout << "M : " << m << endl; 
}
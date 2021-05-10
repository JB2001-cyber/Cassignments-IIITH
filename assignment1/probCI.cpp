/*To Learn
    1> The logic of the question
    2> Using math.h header file for sqrt and floor functions
    3> using long long int and double
    4> Using that kind of while loop for test cases
 */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int N, T, ans;
    double rtn;
    cin >> T;
    while (T--)
    {
        cout << "Enter N : ";
        cin >> N;
        rtn = sqrt(N);
        ans = floor(rtn);
        cout << ans << endl;
    }
}
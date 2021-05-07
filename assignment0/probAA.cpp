#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    long sum;
    long product;
    float div;
    int rem;
    int quotient;
    sum = a+b;
    product = a*b;
    rem = a%b;
    quotient = a/b;
    div = ((float)(a)/b);
    cout << "Sum : " << sum << endl;
    cout << "Product : " << product << endl;
    cout << "Remainder : " << rem << endl;
    cout << "Quotient : " << quotient << endl;
    cout << setprecision(10);
    cout << "Divide(precision upto 10) : " << div << endl;
}
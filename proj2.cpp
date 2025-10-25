#include <iostream>
using namespace std;

// 2.16

void txtFunc()
{
cout << "Write Two Numbers\n";
}

int numFunc()
{
int a, b;
cin >> a >> b;
cout << "Sum of two numbers is " << a + b << "\n";
cout << "Product of two numbers is " << a - b << "\n";
cout << "Difference of two numbers is " <<  a * b  << "\n";
cout << "Quotient of two numbers is " << a / b << "\n";

return 0;
}


int main()
{
txtFunc();
numFunc();
return 0;
}

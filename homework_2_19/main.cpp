#include <iostream>
using namespace std;

// 2.19

void txtFunc()
{
cout << "Input three different inteagers" << endl;
}

int numFunc()
{
int a, b, c;
cin >> a >> b >> c;
cout << "Inputed three inteagers are " << a << " " << b << " " << c << endl;
cout << "Inputed three inreagers sum is " << a + b + c << endl;
cout << "Inputed three inteagers average is " << a + b + c / 3 << endl;
cout << "Inpuded three inteagers product is " << a * b * c << endl;
cout << "Smalles inteager is " << (a < b ? a : (b < c ? b : c)) << endl;
cout << "Largest inteager is " << (a > b ? a :(b > c ? b : c));

return 0;
}



int main()
{
txtFunc();
numFunc();
return 0;
}

#include <iostream>
using namespace std;

// 2.23

void txtFunc()
{
cout << "Enter 5 inteagers" << endl;
}

int numFunc()
{
int a, b, c, d, e;
cin >> a >> b >> c >> d >> e;
cout << "Largest is " << (a > b ? a : (b > c ? b : (c > d ? c : (d > e ? d : e)))) << endl;
cout << "Smallest is " << (a < b ? a : (b < c ? b : (c < d ? c : (d < e ? d : e)))) << endl;

return 0;
}

int main()
{
txtFunc();
numFunc();
return 0;
}

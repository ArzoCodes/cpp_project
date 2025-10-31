#include <iostream>
using namespace std;

// 2.20

void txtFunc()
{
cout << "Write a Number" << endl;  
}

int main()
{
txtFunc();
int r;
cin >> r;
cout << "Diametr = " <<  2 * r << endl;
cout << "Erkarutyun = " << 2 * 3.1415 * r <<  endl;
cout << "Qarakusi metr = " << 3.14159 * r * r <<  endl;

return 0;
}

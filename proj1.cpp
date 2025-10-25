#include <iostream>
using namespace std;

// 2.9

void txtFunc(){
 cout << "Write Two Numbers\n";
}

int numFunc(){
 int a, b, c;
 cin >> b >> c; 
 a = b + c;
cout << "Sum of your numbers is " <<  a;
return 0;
}

int main()
{
txtFunc();
numFunc();
return 0;
};

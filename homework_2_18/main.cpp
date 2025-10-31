#include <iostream>
using namespace std;

// 2.18

void txtFunc()
{
cout << "Write Two Numbers" << endl;
}

int numFunc()
{
int a, b;
cin >> a >> b;
if(a > b){
 cout << a <<  "is larger" << endl;
}else if(a < b){
 cout << b  << "is larger" << endl;
}else{
cout <<  "Numbers are equal" << endl;
}
return 0;
}

int main()
{
txtFunc();
numFunc();
return 0;
}


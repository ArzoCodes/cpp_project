#include <iostream>
using namespace std;

// 2.25

void txtFunc()
{
cout << "Write two numbers" <<  endl;
}

int numFunc()
{
int a, b;
cin >> a >> b;
if(a % b == 0){
cout << "a is multiply b" << endl;
}else{
cout << "a is not mltiply" << endl;
}
}

int main()
{
txtFunc();
numFunc();
return 0;
}

#include <iostream>
using namespace std;

// 2.17

int numFunc()
// first way
{
for(int i = 1; i <= 4; i++)
{
cout << i;
if(i != 4) cout << " ";
}

cout << endl;

// second

cout << 1 << " " << 2 << " " << 3 << " " << 4 << "\n" ;

// third


cout << 1 << " ";
cout << 2 << " ";
cout << 3 << " ";
cout << 4 << " ";
return 0;
}


int main()
{
numFunc();
return 0;
}

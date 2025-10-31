#include <iostream>
using namespace std;

// 2.29


int numFunc(){
cout << "Integer\tSquare\tCube" << endl;
for(int i = 1; i <= 10; i++){
  cout << i << "\t" << i * 2 << "\t" << i * i <<  endl;  
}
return 0;
}

int main(){
numFunc();
return 0;
}

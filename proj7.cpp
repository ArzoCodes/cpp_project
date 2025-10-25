#include <iostream>
using namespace std;

// 2.21

void boxFunc()
{
 int width = 12;
 int height = 8;

for(int h = 0; h < height; h++){
 for(int w = 0; w < width; w++){
   if(h == 0 || h == height - 1 || w == 0 || w == width - 1){
    cout << "*"; 
   }else{
    cout << " ";
    }
  }
  cout << endl;
 }
}

int main()
{
boxFunc();
return 0;
}



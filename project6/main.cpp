#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int x,y;
    cin>>x;
    if(1<=x&&x<=pow(10,6)){
      y=x/5;
      x=x%5;
      y+=x/4;
      x=x%4;
      y+=x/3;
      x=x%3;
      y+=x/2;
      x=x%2;
      y+=x/1;
      x=x%1;
         cout <<y<< endl;

    }

}

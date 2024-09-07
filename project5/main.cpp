#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x;
    if(1<=x&&x<=pow(10,9)){
      y=x/100;
      x=x%100;
      y+=x/20;
      x=x%20;
      y+=x/10;
      x=x%10;
      y+=x/5;
      x=x%5;
      y+=x/1;
      x=x%1;
         cout <<y<< endl;

    }
    return 0;
}

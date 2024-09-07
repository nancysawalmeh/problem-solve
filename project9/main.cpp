#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   double x;
   double p;
    double price=0.0;
    cin>>x;
    cin>>p;
    if(1<=x&&x<=99&&1<=p&&p<=(4*pow(10,4))){
            x=(100-x)/100;
       price=p/x;
    }
    cout << price << endl;
    return 0;
}

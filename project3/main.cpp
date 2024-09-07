#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int k;
   int n;
   int w;
   int total;
   cin>>k;
   cin>>n;
   cin>>w;
   if(1<=k&&w<=1000&&0<=n&&n<= pow(10,9)){
    total=((w*(w+1))/2)*k;
    if(total-n<0){
    cout<<"0";}
    else{
     cout<< total-n;
    }
   }
    return 0;
}

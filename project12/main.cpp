#include <iostream>
#include<math.h>
using namespace std;
int main() {
    unsigned int a;
    unsigned int b;
    cin>>a;
    cin>>b;
    if(0<=a&&0<=b&&a<=pow(10,9)&&b<=pow(10,9)){
   unsigned int result = a ^ b;
   cout<<result<<endl;}

    return 0;
}


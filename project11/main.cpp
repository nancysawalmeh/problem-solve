#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    if(0<=a&&0<=b&&a<=100&&b<=100){
       if (a > 0 && b > 0 &&( abs(a - b) <= 1) || (a == b&& a > 0)){
        cout << "YES" << endl;
       }
       else{
        cout << "NO" << endl;
       }
    }

    return 0;
}

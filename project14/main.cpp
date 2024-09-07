#include <iostream>
#include<limits.h>
#include<float.h>
using namespace std;
int main() {
    long long n, k, a;
    cin >> n >> k >> a;

   // long long result = (n * k) / a;

    if (((n * k) / a)>= INT_MIN&&((n * k) / a)<= INT_MAX ) {
       cout << "int" <<endl;
    }
    else if (((n * k) / a)>= LLONG_MIN&&((n * k) / a)<=LLONG_MAX) {
        cout << "long long" << endl;
    }
    else if(((n * k) / a) >= DBL_MIN&&((n * k) / a)<=DBL_MAX){
        cout << "double" << endl;
    }


    return 0;
}

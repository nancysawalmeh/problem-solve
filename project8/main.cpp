#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long a;
    long long b;
    long long  c;
    long long d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    if(-pow(10,9)<=a && -pow(10,9)<=b&& -pow(10,9)<=c &&a<=pow(10,9)&& b<=pow(10,9)&& c<=pow(10,9)&& -pow(10,18)<=d && d<=pow(10,18)){

        if((a-b+c==d)||(a+b-c==d)||((a+b)*c==d)||((a-b)*c==d)||((a*b)+c==d)||((a*b)-c==d)||(a+(b*c)==d)||(a-(b*c)==d)){
        cout<<"YES"<<endl;}
        else{
             cout<<"NO"<<endl;
        }
    }
    return 0;
}

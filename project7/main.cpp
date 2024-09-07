#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long a;
    long long b;
    long long k;
    cin>>a;
    cin>>b;
    cin>>k;
    if(1<=a&&1<=b&&1<=k&&a<=pow(10,18)&&b<=pow(10,18)&&k<=pow(10,18)){
       if(a%k==0&&b%k==0){
    cout<<"Both"<<endl;
       }
        else if(a%k==0&&b%k!=0){
            cout<<"Memo"<<endl;
        }
        else if(b%k==0&&a%k!=0){
        cout<<"Momo"<<endl;}
        else{
            cout<<"No One"<<endl;
        }
    }
    return 0;
}

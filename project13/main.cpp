#include <iostream>
#include<math.h>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    long long m;
    long long k;
    long long largest;
    cin>>n;
    cin>>m;
    cin>>k;
    if(0<=n&&0<=m&&0<=k&&n<=pow(10,18)&&m<=pow(10,18)&&k<=pow(10,18)){
         if(n==0){
            largest=0;
         }

       else{
            long long counts=0;
          counts= min(n,m);
        largest+=counts;
       n-=counts;
       if(n>0){
        largest+=n/2;
       }
       largest=min(largest,k);

        }

        cout<<largest<<endl;
    }
    return 0;
}

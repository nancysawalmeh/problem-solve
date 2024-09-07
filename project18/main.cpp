#include <iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{

    long long number;
    cin>>number;
     long long num=number;
    if(1<=number&&number<=pow(10,6)){
        long long a ;
         cout<<num;
       while( number!=1){

            if(number%2==0){
                number=number/2;
            }
            else if(number%2!=0){
                number=(number*3)+1;
            }

          a=number;

          cout << " ";
          cout<<a;
        }


 return 0;

    }

}

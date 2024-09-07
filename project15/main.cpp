#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   int numberoflucky;
   cin>> numberoflucky;

   if(10<=numberoflucky&&numberoflucky<=99){
   int num1=numberoflucky/10;
    int num2=numberoflucky%10;
    if(num1==0||num2==0){
    cout<<"YES";

    }
     else if(num1%num2==0 || num2%num1==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }}
    return 0;
}

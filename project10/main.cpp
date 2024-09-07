#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if('a'<=x&&x<='z'){
      if(x=='z'){
        x='a';
        cout<<x<<endl;
    }
    else{
    x+=1;

    cout<<x<<endl;}

    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>> a;
    if(1<=a&&a<=100){
    if(((a%2==0)&& a!=2)){//2 حالة خاصة عشان لما اقسم بطلع رقم فردي
    cout << "YES" << endl;}
    else{
       cout << "NO" << endl;
    }

    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int sizee;
    cin>>sizee;
  int a[sizee];
   for (int i = 0; i < sizee; i++) {
        cin >> a[i];
    }


    int sizen = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < sizen - 1; i++) {
        for (int j = 0; j < sizen - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
cout<<"[";
    for (int i = 0; i < sizen; i++) {

        cout << a[i] ;
        if(i<=sizen-2)
        cout << ",";

    }
cout<<"]";
    return 0;
}


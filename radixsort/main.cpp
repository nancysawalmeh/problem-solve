#include <iostream>

using namespace std;
int getmaxnumber(int arra[], int sizearray)
{
    int maxnumber = arra[0];
    for (int i = 1; i < sizearray; i++)
        if (arra[i] > maxnumber)
            maxnumber = arra[i];
    return maxnumber;
}

void CountingSort(int arra[], int sizearray, int divion)
{
    int output[sizearray];
    int countnum[10] = {0};

    for (int i = 0; i < sizearray; i++)
        countnum[ (arra[i]/divion)%10 ]++;

    for (int i = 1; i < 10; i++)
        countnum[i] += countnum[i - 1];

    for (int i = sizearray - 1; i >= 0; i--)
    {
        output[countnum[ (arra[i]/divion)%10 ] - 1] = arra[i];
        countnum[ (arra[i]/divion)%10 ]--;
    }

    for (int i = 0; i < sizearray; i++)
        arra[i] = output[i];
}



void radixSort(int arra[], int sizearray)
{
    int m = getmaxnumber(arra, sizearray);
    for (int div = 1; m/div > 0; div *= 10)
        CountingSort(arra, sizearray, div);
}
int main()
{

int sizearray;
cin>> sizearray;
int arrayradix[sizearray];

for(int i=0;i<sizearray;i++){
    cin>>arrayradix[i];
}

radixSort(arrayradix,sizearray);//cell function


cout<<"[";// this all print result
    for (int i = 0; i < sizearray; i++) {

        cout << arrayradix[i] ;
        if(i<=sizearray-2)
        cout << ",";

    }
cout<<"]";
    return 0;
}

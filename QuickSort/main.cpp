#include <iostream>

using namespace std;


int quicksort1(int arr[],int L,int R)
{ int pivot = arr[R];

    int i = L - 1;
    for (int j = L; j <= R - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[R]);

    return (i + 1);
}
void quickSort(int arr[],int larray,int rarray)
{
    if (larray<rarray)
    {   int pointerp=quicksort1(arr,larray,rarray);
        quickSort(arr,larray,pointerp-1);
        quickSort(arr,pointerp+1,rarray);
    }
}

int main()
{
   int sizearray;
cin>> sizearray;
int arrayquick[sizearray];
for(int i=0;i<sizearray;i++){
    cin>>arrayquick[i];
}
int Larray=0;//first index
int pivot=0;
int Rarray=((sizeof(arrayquick) / sizeof(arrayquick[0]))-1);//last index
quickSort(arrayquick,pivot,Rarray);//cell function


cout<<"[";// this all print result
    for (int i = 0; i < sizearray; i++) {

        cout << arrayquick[i] ;
        if(i<=sizearray-2)
        cout << ",";

    }
cout<<"]";
return 0;
}

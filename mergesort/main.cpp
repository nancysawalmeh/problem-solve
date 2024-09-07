#include <iostream>

using namespace std;
void margesorted(int arra[],int Left,int right){
   int m=(Left+right)/2;
   int lsize=m-Left+1;
   int rsize=right-m;
   int larray[lsize];
   int rarray[rsize];
   for(int i=0;i<lsize;i++){
    larray[i]=arra[i+Left];}

    for(int j=0;j<rsize;j++){
    rarray[j]=arra[j+m+1];}

    int lp=0,rp=0,op=Left;// this pointer used this on compear

    while(lp<lsize&&rp<rsize){

    if(larray[lp]<rarray[rp]){
        arra[op]=larray[lp];
        lp++;
        op++;
    }
    else{
       arra[op]=rarray[rp];
        rp++;
         op++;
    }
    }
while(lp<lsize){
    arra[op]=larray[lp];
        lp++;
         op++;
}

while(rp<rsize){
     arra[op]=rarray[rp];
        rp++;
         op++;
}
   }

 void margesort(int arra[],int Left,int right){
    int Middel=(Left+right)/2 ;
    if(Left<right){   // to check if array become one element.
       margesort(arra,Left,Middel);
       margesort(arra,Middel+1,right);
       margesorted(arra,Left,right);
    }

}
int main() {


int sizearray;
cin>> sizearray;
int arraymarge[sizearray];
for(int i=0;i<sizearray;i++){
    cin>>arraymarge[i];
}
int L=0;//first index
int R=(sizeof(arraymarge) / sizeof(arraymarge[0]))-1;//last index
margesort(arraymarge,L,R);//cell function


cout<<"[";// this all print result
    for (int i = 0; i < sizearray; i++) {

        cout << arraymarge[i] ;
        if(i<=sizearray-2)
        cout << ",";

    }
cout<<"]";
return 0;
}

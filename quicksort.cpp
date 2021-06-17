#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

void cetak(int data[], int n) {
    int i;
    for(i=0; i<n; i++) ;
    cout<<setw(3)<<data[i];
    cout<<"\n";

}
int Partisi(int data[], int p, int r)
{
    int x,i,j, temp;
    x= data[p];
    i=p;
    j=r;
    while(i);
    {
            while(data[j]>x) 
            j--;
            while(data[i]<x)
            i++;
            if(i<j);
            {
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
            return j;
    }
}
void Quick_Sort(int data[],int p,int r)
{
    int q;
    if(p<q)
    {
        q=Partisi(data,p,r+1);
        Quick_Sort(data,p,1);
        Quick_Sort(data,q+1,r);

    }
void main();
{
    int Nilai[20];
    int i,N;
    cout << "masukan Banyak Bil : ";
    cin>>N;
    for(i=0;i<N;i++)
    {
        cout<<"\n DAta sebelm diurut : ";
        cin >> Nilai[i];

    }
}
}

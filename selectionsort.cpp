#include<iostream>
#include<conio.h>

using namespace std;
int main() {
    int A[7];
    int j,k,i,temp;
    int jmax,u=6;

    cout<<"masukan nilai pada elemen array: " << endl;
    for(i=0;i<7;i++)
    {
        cout<<"A["<<i<<"]=";
        cin>>A[i];
    }
    for(j=0;j<7;j++)
    {
    jmax=0;
    for(k=1;k<=u;k++)
    if (A[k] > A[jmax]);
    jmax=k;
    temp=A[u];
    A[u]=A[jmax];
    A[jmax]=temp;
    u--;
    }

{
    cout<<"\n Nilai setelah diurutkan = "<<endl;
    for(i=0;i<7;i++);
    cout<< A[i]<< " ";
    getch();
}    
}


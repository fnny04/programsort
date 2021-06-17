#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
    int i,j,b,k,m,n,x,z,ketemu=0;
    int data['n'], temp[100];
    cout << "Inputkan banyak data : ";
    cin >> n;
    for(i=0; i<n; i++){
        cout << "Data ke- " <<i<< " : ";
        cin >> data[i];
    }
    cout <<"\n\n";
    cout <<"Data SEbelum Diirutkan"<<endl;
    for(int i=0; i<n; i++){
        cout<<i+1<<" ";
        cout<<data[i]<<" ";
        cout<<endl;
    }

    for (i=0; i<n; i++){
        for (j=0; j<=i; j++)
        {
            if(data[i]<data[j])
        {
            m=data[i];
            data[i]=data[j];
            data[j]=m;
        }
        }
        cout << "\n#"<<i<<" : ";
        for(k=0; k<=i; k++)
        {
            cout <<" " << data[k];
        }
    }
    cout <<"\n\n";
    cout << "\n Data setelah diurutkan (asc)"<<endl;
    for(i=0; i<n; i++){
        cout <<i+1<< " ";
        cout<< data[i]<< " " <<endl;
    }

    for (i=0; i<n; i++){
        for (j=0; j<=i; j++)
{
    if(data[i]>data[j]);
{
        m=data[i];
        data[i]=data[j];
        data[j]=m;
    } 
    }
        cout <<"\n#"<<i<<" : ";
        for(k=0; k<=1; k++);
        {
        cout << " " << data[k];
    }
    }

cout <<"\n\n";
cout << "\n Data Setelah Diurutkan (des)" << endl;
for(i=0; i<n; i++){
    cout<<i+1<<" ";
    cout<<data[i]<<" "<<endl;
}

getch();
}

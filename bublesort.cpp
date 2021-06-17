#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int nilai['n'] ;
    int temp;
    int n;
    cout<<"Banyak data : ";
    cin>>n;
    cout<< endl;
    for (int a=1; a<=n; a++){
    cout<<"nilai ["<<a<<"]:";
    cin >> nilai[a];
    }
        cout <<"\n\n";
        cout <<"Data sebelum diurutkan"<< endl;
        for(int a=1; a<=n; a++){
            cout << nilai[a]<< " ";
        }
        
        for(int a=n-1; a>=1; a--){
            for(int b=1; b<=a; b++){
                if(nilai[b] > nilai [b+1]){
                    temp=nilai[b+1];
                    nilai[b+1]=nilai[b];
                    nilai[b]=temp;
                }
            }
        }
    cout <<"\n\n Data Setelah Diurutkan (ascd)" << endl;
    for(int a=1; a<=n; a++){
        cout << nilai[a] << " ";
        }

    cout << "\n\n" ;
    cout << "\n\n Data Setelah Diurutkan (desc)" << endl;
    for (int a=n; a>=1; a--){
        cout << nilai[a]<<" ";
    }
    getch();
}


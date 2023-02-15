#include <iostream>

using namespace std;

int main()
{
    int i;
    cout <<"==== for ===="<<endl;
    for(i=0; i<10; i++){
    cout << "perulangan ke" <<i<< endl;
    }

      int j = 0;
      char tambah='y';
    cout<< "==== while ===="<<endl;
    while(tambah == 'y'){
         cout<<"perulangan ke :" << j <<endl;
        cout<<"Apakah anda ingin nambah? (y/n)";
        cin>> tambah;
        j++;

    }
    return 0;

}

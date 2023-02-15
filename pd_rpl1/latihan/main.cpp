#include <iostream>

using namespace std;

int main()
{
    // deklarasi tipe data
    string nama;
    int umur;
    char jenis_kelamin;


    // --- proses input ----
    cout <<"siapakah namamu?" <<endl;
    cout <<"jawab :";
     // menyimpan data ke variabel
   getline(cin,nama);

    cout <<"berapakah umurmu?" <<endl;
    cout << "jawab:";
     // menyimpan data ke variabel
    cin >> umur;

    cout <<"kamu laki-laki atau perempuan (l/p)?" <<endl;
    cout << "jawab :";
    // menyimpan data ke variabel
    cin >> jenis_kelamin;

    //--- proses output---
    cout << "salam kenal !" << nama << "sekarang engkau berusia ";
    cout << umur << "dan engkau berjenis kelamin " << jenis_kelamin;
    return 0;
}

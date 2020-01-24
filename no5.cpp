/* SOAL NOMOR 5
author : Aditiya Permana */

#include <iostream>
using namespace std;

int main()
{
    string kend;
    int jam, jamper, jamber, bayar, denda;

    cout << "==================================================" << endl;
    cout << "           Masukkan jenis kendaraan : ";
    cin >> kend;
    cout << "==================================================" << endl;
    cout << "             Masukkan jam parkir : ";
    cin >> jam;

    if (kend == "motor")
    {
        if (jam == 1)
        {
            bayar = 3000;
        }
        else if (jam > 1 && jam < 24)
        {
            bayar = jam * 1000 + 2000;
        }
        else if (jam >= 24)
        {
            cout << "==================================================" << endl;
            cout << "   Anda parkir lebih dari 24 terkena denda 100000" << endl;
            ;
            bayar = 100000 + (jam * 1000 + 2000);
        }
    }
    else if (kend == "mobil")
    {
        if (jam == 1)
        {
            bayar = 10000;
        }
        else if (jam > 1 && jam < 24)
        {
            bayar = jam * 2000 + 8000;
        }
        else if (jam >= 24)
        {
            cout << "==================================================" << endl;
            cout << "  Anda parkir lebih dari 24 jam terkena denda 100000" << endl;
            bayar = 100000 + (jam * 2000 + 8000);
        }
    }

    cout << "           Total bayar parkir Anda : " << bayar;
}
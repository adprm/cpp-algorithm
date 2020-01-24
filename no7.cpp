/* SOAL NOMOR 7
author : Aditiya Permana 15190007  */

#include <iostream>
using namespace std;

int main()
{

    int j1, j2, j3, t1, t2, t3, t_awal, t_akhir;

    cout << "==============SELAMAT DATANG DI HOTEL ENA ENA==============" << endl;
    cout << "      KAMAR                                        HARGA" << endl;
    cout << "     ANGGREK                                    500.000/MALAM" << endl;
    cout << "     KAMBOJA                                    750.000/MALAM" << endl;
    cout << "      TULIP                                   1.000.000/MALAM" << endl;
    cout << "============================================================" << endl;
    cout << "       pilih jumlah kamar anggrek, kamboja, tulip " << endl;
    cout << "kamar anggrek : ";
    cin >> j1;
    cout << "kamar kamboja : ";
    cin >> j2;
    cout << "kamar tulip : ";
    cin >> j3;

    if (j1 >= 1)
    {
        t1 = 500000 * j1;
    }
    else
    {
        t1 = 0;
    }

    if (j2 >= 1)
    {
        t2 = j2 * 750000;
    }
    else
    {
        t2 = 0;
    }

    if (j3 >= 1)
    {
        t3 = j3 * 1000000;
    }
    else
    {
        t3 = 0;
    }
    t_awal = ((t1 + t2) + t3);
    t_akhir = ((t_awal * 0.1) + t_awal);
    cout << "============================================================" << endl;
    cout << "Total pembayaran : " << t_awal << endl;
    cout << "Karena ada pajak 10% maka pembayaran menjadi" << endl;
    cout << "Total kamar yang anda pesan : " << t_akhir << endl;
}
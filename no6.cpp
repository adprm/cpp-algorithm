//SOAL NOMOR 6
#include <iostream>
using namespace std;

int main()
{
    int ml, jr, mg, ap, bl, ag, sl;
    long harga, melon, jeruk, mangga, apel, belimbing, anggur, salak;

    cout << "==============SELAMAT DATANG DI TOKO BUAH==============" << endl;
    cout << "=======================DAFTAR BUAH=====================" << endl;
    cout << "   BUAH                   HARGA            KODE BUAH   " << endl;
    cout << "   MELON                15K/buah               ML      " << endl;
    cout << "   JERUK                  20K/kg               JR      " << endl;
    cout << "   MANGGA                 8K/kg                MG      " << endl;
    cout << "   APEL                   30K/kg               AP      " << endl;
    cout << "   BELIMBING              15K/kg               BL      " << endl;
    cout << "   ANGGUR                 40K/kg               AG      " << endl;
    cout << "   SALAK                  10K/kg               SL      " << endl;
    cout << "=======================================================" << endl;

    cout << "Beli berapa melon : ";
    cin >> ml;
    cout << "Beli berapa jeruk : ";
    cin >> jr;
    cout << "Beli berapa mangga : ";
    cin >> mg;
    cout << "Beli berapa apel : ";
    cin >> ap;
    cout << "Beli berapa belimbing : ";
    cin >> bl;
    cout << "Beli berapa anggur : ";
    cin >> ag;
    cout << "Beli berapa salak : ";
    cin >> sl;

    if (ml >= 1)
    {
        melon = ml * 15000;
    }
    else
    {
        melon = 0;
    }
    if (jr >= 1)
    {
        jeruk = jr * 20000;
    }
    else
    {
        jeruk = 0;
    }
    if (mg >= 1)
    {
        mangga = mg * 8000;
    }
    else
    {
        mangga = 0;
    }
    if (ap >= 1)
    {
        apel = ap * 30000;
    }
    else
    {
        apel = 0;
    }
    if (bl >= 1)
    {
        belimbing = bl * 15000;
    }
    else
    {
        belimbing = 0;
    }
    if (ag >= 1)
    {
        anggur = ag * 40000;
    }
    else
    {
        anggur = 0;
    }
    if (sl >= 1)
    {
        salak = sl * 10000;
    }
    else
    {
        salak = 0;
    }

    harga = melon + jeruk + mangga + apel + belimbing + anggur + salak;

    if (harga >= 100000)
    {
        cout << "=======================================================" << endl;
        cout << "Selamat anda mendapatkan 1 buah mangga karena belanja lebih dari 100.000" << endl;
        cout << "Total bayar : " << harga;
    }
    else
    {
        cout << "=======================================================" << endl;
        cout << "Total bayar : " << harga;
    }
}
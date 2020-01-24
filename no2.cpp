/* SOAL NOMOR 2
author : Aditiya Permana */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Menentukan jenis sebuah segitiga" << endl;
    cout << "Masukkan sisi A : ";
    cin >> a;
    cout << "Masukkan sisi B : ";
    cin >> b;
    cout << "Masukkan sisi C : ";
    cin >> c;

    if (a == b && b == c)
    {
        cout << "Segitiga sama sisi";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "Segitiga sama kaki";
    }
    else
    {
        cout << "Segitita sembarang";
    }
}
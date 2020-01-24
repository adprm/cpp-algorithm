/* SOAL NOMOR 11
author : Aditiya Permana 15190007 (peesegi) */

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Masukkan nilai : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
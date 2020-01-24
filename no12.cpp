/* SOAL NOMOR 12
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
        for (j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/* SOAL NOMOR 9
author : Aditiya Permana */

#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " genap" << endl;
        }
        else if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }
}
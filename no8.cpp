//SOAL NOMOR 8
#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 100; i > 1; i--)
    {
        if (i % 2 == 1 && i % 3 == 0)
        {
            cout << i << endl;
        }
    }
}
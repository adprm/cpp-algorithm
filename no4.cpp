/* SOAL NOMOR 4
author : Aditiya Permana 15190007 */

#include <iostream>
using namespace std;

int main() {
    long bel, diskon, bay;
    char type;

    cout<<"             Apakah anda member (y/n)              : ";cin>>type;
    cout<<"===================================================="<<endl;
    cout<<"             Masukkan total  belanja               : ";cin>>bel;
    cout<<"===================================================="<<endl;

    //condiition member
    if (type == 'y' && bel >= 1000000) 
    {
        cout<<"             Anda mendapat diskon 10%"<<endl;
        diskon = bel - (bel * 0.1);
        bay = diskon;
    }else if (type == 'y' && bel >= 750000)
    {
        cout<<"             Anda mendapat diskon 7,5%"<<endl;
        diskon = bel - (bel * 0.075);
        bay = diskon;
    }else if (type == 'y' && bel >= 500000)
    {
        cout<<"             Anda mendapat diskon 5%"<<endl;
        diskon = bel - (bel * 0.05);
        bay = diskon;
    }else
    //condition non member
    if(type == 'n' && bel >= 1000000)
    {
        cout<<"             Anda mendapat diskon 5%"<<endl;
        diskon = bel - (bel * 0.05);
        bay = diskon;
    }else if (type == 'n' && bel >= 750000)
    {
        cout<<"             Anda mendapat diskon 2,5%"<<endl;
        diskon = bel - (bel * 0.025);
        bay = diskon;
    }else if (type == 'n' && bel >= 500000)
    {
        cout<<"             Anda mendapat diskon 1%"<<endl;
        diskon = bel - (bel * 0.01);
        bay = diskon;
    }else
    {
        bay = bel;
    }
    cout<<"===================================================="<<endl;
    cout<<"         Total bayar menjadi : "<<bay;
    
}
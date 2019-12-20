/* Membuat program sewa lapangan futsal
    Nama Kelompok : 
        Aditiya Permana
        Kevin Renaldo
        Rizky Kaisar */

#include <iostream>
using namespace std;

int main()
{

    //Deklarasi variable
    string nama, member, status;
    int lama_sewa, tgl_sewa, jam_sewa, hrg_siang, hrg_malam;
    float harga_lapangan, total_bayar, masukkan_bayar, total_akhir, kembalian;

    //nilai variable
    hrg_siang = 80000;
    hrg_malam = 125000;

    //Looping dengan Do
    do
    {

        // Tampilan Jadwal & Harga Lapangan Futsal
        cout << "=====================================================" << endl;
        cout << "|                 LAPANGAN FUTSAL 99                |" << endl;
        cout << "|              Daftar Harga Sewa Lapangan           |" << endl;
        cout << "=====================================================" << endl;
        cout << "|  Waktu Sewa                            Harga Sewa |" << endl;
        cout << "|09.00 - 18.00                          80.000 / Jam|" << endl;
        cout << "|18.00 - 21.00                         125.000 / jam|" << endl;
        cout << "=====================================================" << endl;

        //Input Data Penyewaan Lapangan
        cout << "Nama Penyewa                           : ";
        cin >> nama;
        cout << "Ingin Menyewa Lapangan Berapa Lama     : ";
        cin >> lama_sewa;
        cout << "Jam Berapa Anda Ingin Menyewa Lapangan : ";
        cin >> jam_sewa;
        cout << "Masukkan Tanggal Sewa Lapangan         : ";
        cin >> tgl_sewa;
        cout << "=====================================================" << endl;

        //Logig Penyewaan Siang
        if (jam_sewa >= 9 && jam_sewa <= 18)
        {
            if (lama_sewa <= 1)
            {
                harga_lapangan = hrg_siang;
            }
            else if (lama_sewa >= 2)
            {
                harga_lapangan = hrg_siang * lama_sewa;
            }
        }

        // Logig Penyewaan Malam
        else if (jam_sewa >= 19 && jam_sewa <= 21)
        {
            if (lama_sewa <= 1)
            {
                harga_lapangan = hrg_malam;
            }
            else if (lama_sewa >= 2)
            {
                harga_lapangan = hrg_malam * lama_sewa;
            }
        };

        //View Data Penyewaan Lapangan
        cout << "Atas Nama                              : " << nama << endl;
        cout << "Lama Penyewaan Lapangan Dalam Jam      : " << lama_sewa << endl;
        cout << "Waktu Jam Sewa Lapangan                : " << jam_sewa << endl;
        cout << "Waktu Tanggal Sewa Lapangan            : " << tgl_sewa << endl;
        cout << "Total Harga Penyewaan Lapangan         : " << harga_lapangan << endl;
        cout << "=====================================================" << endl;

        //Input Data Member atau Non Member
        cout << "Apakah Anda Member (y/t)               : ";
        cin >> member;
        cout << "=====================================================" << endl;

        //Logig member
        if (member == "y" || member == "Y")
        {
            // cout<<"member";
            cout << "Selamat Anda Mendapat Diskon 10%" << endl;
            total_bayar = harga_lapangan - (harga_lapangan * 0.1);
        }

        else if (member == "t" || member == "T")
        {
            // cout<<"Non";
            total_bayar = harga_lapangan;
        };

        //Total Bayar lapangan sebelum meberi uang nya
        cout << "Total Bayar Lapangan Yang Anda Sewa    : " << total_bayar << endl;

        //Membayar Uang
        cout << "=====================================================" << endl;
        cout << "Masukkan Jumlah Uang                   : ";
        cin >> masukkan_bayar;

        //Login Pembayaran
        if (masukkan_bayar >= total_bayar)
        {
            total_akhir = masukkan_bayar - total_bayar;
            kembalian = total_akhir;
        }
        else
        {
            total_akhir = total_bayar;
        }

        //
        cout << "Kembalian                              : " << kembalian << endl;

        //Interface Ingin Memesan Lagi atau tidak
        cout << "=====================================================" << endl;
        cout << "Apakah Anda Ingin Menyewa Lapangan Lagi (y/t) : ";
        cin >> status;

        //Looping Status
    } while (status == "y" || status == "Y");

    //Program Selesai Jika tidak Memesan lagi
    cout << "=====================================================" << endl;
    cout << "|                                                    " << endl;
    cout << "|        Terimakasih Telah Memesan Lapangan          " << endl;
    cout << "|                                                    " << endl;
    cout << "=====================================================" << endl;
}
#include <iostream>
using namespace std;

int main()
{
    // Deklarasi varible
    int kelas;
    char status;
    string kode_pesawat, nama_pesawat, kelas_pesawat;
    long harga_pesawat, harga_kelas, total_bayar, pembayaran, kembalian;
    
    do
    {

        // Tampilan
        cout << "============= Program Tiket Pesawat =============" << endl;
        cout << "|               Jakarta - Jepang                |" << endl;
        cout << "|-----------------------------------------------|" << endl;
        cout << "============== Harga Tiket Pesawat ==============" << endl;
        cout << "|MERPATI AIRLINES       |            Rp500.000  |" << endl;
        cout << "|GARUDA AIRLINES        |            Rp1.000.000|" << endl;
        cout << "|LION AIRLINES          |            Rp1.300.000|" << endl;
        cout << "================= Selamat Datang ================" << endl;

        // masukkan kode pesawat
        cout << "Masukkan kode pesawat (MPT/GRD/LION) : ";
        cin >> kode_pesawat;

        cout << "================ Harga Kelas Pesawat ============" << endl;
        cout << "|1. Ekonomi                            Rp100.000|" << endl;
        cout << "|2. Bisnis                             Rp200.000|" << endl;
        cout << "|3. Eksekutif                          Rp300.000|" << endl;
        cout << "=================================================" << endl;

        // masukkan kelas pesawat
        cout << "Pilih kelas pesawat (1/2/3) : ";
        cin >> kelas;

        // logika selection harga pemilihan pesawat dan kelas
        if (kode_pesawat == "mpt" || kode_pesawat == "MPT")
        {
            nama_pesawat = "MERPATI AIRLINES";
            harga_pesawat = 500000;
            if (kelas == 1)
            {
                harga_kelas = 100000;
                total_bayar = harga_pesawat + harga_kelas;
            }
            else if (kelas == 2)
            {
                harga_kelas = 200000;
                total_bayar = harga_pesawat + harga_kelas;
            }
            else if (kelas == 3)
            {
                harga_kelas = 300000;
                total_bayar = harga_pesawat + harga_kelas;
            }
        }
        else if (kode_pesawat == "grd" || kode_pesawat == "GRD")
        {
            nama_pesawat = "GARUDA AIRLINES";
            harga_pesawat = 1000000;
            if (kelas == 1)
            {
                harga_kelas = 100000;
                total_bayar = harga_pesawat + harga_kelas;
            }
            else if (kelas == 2)
            {
                harga_kelas = 200000;
                total_bayar = harga_pesawat + harga_kelas;
            }
            else if (kelas == 3)
            {
                harga_kelas = 300000;
                total_bayar = harga_pesawat + harga_kelas;
            }
        }
        else if (kode_pesawat == "lion" || kode_pesawat == "LION")
        {
            nama_pesawat = "LION AIRLINES";
            harga_pesawat = 1300000;
            if (kelas == 1)
            {
                harga_kelas = 100000;
                total_bayar = harga_pesawat + harga_kelas;
            }
            else if (kelas == 2)
            {
                harga_kelas = 200000;
                total_bayar = harga_pesawat + harga_kelas;
            }
            else if (kelas == 3)
            {
                harga_kelas = 300000;
                total_bayar = harga_pesawat + harga_kelas;
            }
        }

        // Logika kelas pesawat
        if (kelas == 1)
        {
            kelas_pesawat = "Ekonomi";
        }
        else if (kelas == 2)
        {
            kelas_pesawat = "Bisnis";
        }
        else if (kelas == 3)
        {
            kelas_pesawat = "Eksekutif";
        }

        // Hasil
        cout << "================= Data Pembayaran =================" << endl;
        cout << "Nama pesawat                   :    " << nama_pesawat << endl;
        cout << "Kelas Pesawat                  :    " << kelas_pesawat << endl;
        cout << "Total bayar tiket anda adalah  :    " << total_bayar << endl;
        cout << "===================================================" << endl;

        cout << "Masukkan uang anda : ";
        cin >> pembayaran;

        // Login pembayaran uang kembalian
        if (pembayaran > total_bayar)
        {
            kembalian = pembayaran - total_bayar;
        }
        else
        {
            kembalian = 0;
        }

        // Hasil
        cout << "Uang anda                      :    " << pembayaran << endl;
        cout << "Kembalian anda                 :    " << kembalian << endl;
        cout << "===================================================" << endl;

        cout << "Apakah anda ingin memesan tiket lagi?";
        cin >> status;

    // Looping Jika status "Y" maka kode program akan di ulang
    } while (status == 'y' || status == 'Y');

    //Program Selesai Jika tidak Memesan lagi
    cout << "===============================================================" << endl;
    cout << "|                                                             |" << endl;
    cout << "|               Terimakasih Telah Memesan Tiket               |" << endl;
    cout << "|                                                             |" << endl;
    cout << "===============================================================" << endl;

    return 0;
}
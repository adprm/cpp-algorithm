#include <iostream>
using namespace std;

int main()
{
    // Deklarasi varible char, string, integer
    char status;
    string kode_pesawat, nama_pesawat, kelas_pesawat, biodata_diri[3];
    int kelas, harga_pesawat, harga_kelas, total_bayar, pembayaran, kembalian;

    do
    {
        system("clear");
        // Tampilan selamat datang
        cout << "============= Program Tiket Pesawat =============" << endl;
        cout << "|                                               |" << endl;
        cout << "|                 SELAMAT DATANG                |" << endl;
        cout << "|                                               |" << endl;
        cout << "=================================================" << endl;
        cout << "Masukkan nama anda                         : ";
        cin >> biodata_diri[0];
        cout << "Masukkan umur anda                         : ";
        cin >> biodata_diri[1];
        cout << "Masukkan tanggal keberangkatan(dd/mm/yyyy) : ";
        cin >> biodata_diri[2];

        cout << "=================================================" << endl;

        // Tampilan pemesanan tiket pesawat
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

        cout << "=================================================" << endl;

        // Tampilan pemesanan kelas pesawat
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

        cout << "=================================================" << endl;

        // Output Hasil Data Pemesanan
        cout << "=================Data Pembayaran ================" << endl;
        cout << "Nama pemesan tiket            : " << biodata_diri[0] << endl;
        cout << "Umur                          : " << biodata_diri[1] << endl;
        cout << "Tanggal keberangkatan         : " << biodata_diri[2] << endl;
        cout << "Nama pesawat                  : " << nama_pesawat << endl;
        cout << "Kelas Pesawat                 : " << kelas_pesawat << endl;
        cout << "Total bayar tiket anda adalah : " << total_bayar << endl;
        cout << "=================================================" << endl;

        // Masukkan jumlah uang pembayaran
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

        cout << "=================================================" << endl;

        // output hasil uang kembalian
        cout << "Uang anda                      :    " << pembayaran << endl;
        cout << "Kembalian anda                 :    " << kembalian << endl;
        cout << "===================================================" << endl;

        cout << "Apakah anda ingin memesan tiket lagi (y / t) ?";
        cin >> status;

        // Looping Jika status "Y" maka kode program akan di ulang
    } while (status == 'y' || status == 'Y');

    //Program Selesai Jika tidak Memesan lagi
    cout << "=================================================" << endl;
    cout << "|                                               |" << endl;
    cout << "|         Terimakasih Telah Memesan Tiket       |" << endl;
    cout << "|                                               |" << endl;
    cout << "=================================================" << endl;

    return 0;
}
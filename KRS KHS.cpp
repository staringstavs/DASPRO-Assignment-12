// JUDUL
    // KRS DAN KHS
    // OLEH MASAYOSHI SURYAVANDITYA
    // A11.2022.14005
    // 14 OKTOBER 2022
    // BISMILLAH JALAN PROGRAMNYA

#include <iostream>
using namespace std;

// KAMUS
string nama;
string nim;
string prd;
string again;
char save;
char lanjut;
int n1;
int n2;
int n3;
int n4;
int n5;
int n6;
int n7;
int sks = 20;
int jmk = 7;
float totals;
float average;


// DESKRIPSI
int main()
{
    cout << "+-------------------------------+" << endl;
    cout << "|----| KARTU RENCANA STUDI |----|" << endl;
    cout << "+-------------------------------+" << endl;
    cout << endl;

    cout << " Nama  :   ";
    getline(cin, nama);
    cout << " Nim   :   ";
    getline(cin, nim);
    cout << " Prodi :   ";
    getline(cin, prd);
    system("cls");
    cout << endl;

    do
    {
        cout << "+------------------------------+" << endl;
        cout << "|----| INPUT DATA MATAKUL |----|" << endl;
        cout << "+------------------------------+" << endl;
        cout << endl;

        cout << " 1. Mata Kuliah : Dasar Pemrograman " << endl;
        cout << "    Jumlah SKS  : 4" << endl;
        cout << "    Nilai       : ";
        cin >> n1;
        cout << endl;

        cout << " 2. Mata Kuliah : Kalkulus I " << endl;
        cout << "    Jumlah SKS  : 4" << endl;
        cout << "    Nilai       : ";
        cin >> n2;
        cout << endl;

        cout << " 3. Mata Kuliah : Organisasi dan Arsitektur Komputer " << endl;
        cout << "    Jumlah SKS  : 3" << endl;
        cout << "    Nilai       : ";
        cin >> n3;
        cout << endl;

        cout << " 4. Mata Kuliah : Dasar-Dasar Komputasi " << endl;
        cout << "    Jumlah SKS  : 2" << endl;
        cout << "    Nilai       : ";
        cin >> n4;
        cout << endl;

        cout << " 5. Mata Kuliah : Matematika Diskrit " << endl;
        cout << "    Jumlah SKS  : 3" << endl;
        cout << "    Nilai       : ";
        cin >> n5;
        cout << " " << endl;

        cout << " 6. Mata Kuliah : Pemrograman Berbasis WEB " << endl;
        cout << "    Jumlah SKS  : 2" << endl;
        cout << "    Nilai       : ";
        cin >> n6;
        cout << endl;

        cout << " 7. Mata Kuliah : Pengantar Teknologi Informasi " << endl;
        cout << "    Jumlah SKS  : 2" << endl;
        cout << "    Nilai       : ";
        cin >> n7;
        cout << endl;
        system("cls");

        cout << "PASTIKAN DATA TERCANTUM DENGAN BENAR!" << endl;
        cout << "Data sudah tercantum dengan benar? (Y/N)" << endl;
        cin >> save;
        cout << endl;

    } while (save == 'N');
    system("cls");

    if (save == 'y', save == 'Y')
    {
        cout << "--------| P R O S E S |--------" << endl
             << endl;

        cout << "Ketik 'Y' Untuk melanjutkan : ";
        cin >> lanjut;
        if (lanjut == 'y' || lanjut == 'Y')
        {
            cout << endl;
        }

        system("cls");
    }

    cout << endl;
    cout << " +-------------------------------------------------------------+" << endl;
    cout << " |                      KARTU HASIL STUDI                      |" << endl;
    cout << " |                  PROGRAM STUDI INFORMATIKA                  |" << endl;
    cout << " |                 UNIVERSITAS DIAN NUSWANTORO                 |" << endl;
    cout << " +-------------------------------------------------------------+" << endl;
    cout << " " << endl;
    cout << " Nama  :   " << nama << endl;
    cout << " Nim   :   " << nim << endl;
    cout << " Prodi :   " << prd << endl;
    cout << " " << endl;

    cout << " +------------------------------------------+---+-------------+" << endl;
    cout << " |             Nama Mata Kuliah             |SKS|    Nilai    |" << endl;
    cout << " | -----------------------------------------+---+-------------|" << endl;
    cout << " | Kalkulus 1                               | 4 |"
         << "      " << n1 << "     |" << endl;
    cout << " | -----------------------------------------+---+-------------|" << endl;
    cout << " | Dasar Pemrograman                        | 4 |"
         << "      " << n2 << "     |" << endl;
    cout << " | -----------------------------------------+---+-------------|" << endl;
    cout << " | Matematika Diskrit                       | 3 |"
         << "      " << n3 << "     |" << endl;
    cout << " | -----------------------------------------+---+-------------|" << endl;
    cout << " | Pemrograman Berbasis Web                 | 2 |"
         << "      " << n4 << "     |" << endl;
    cout << " | -----------------------------------------+---+-------------|" << endl;
    cout << " | Organisasi dan Arsitektur Komputer       | 3 |"
         << "      " << n5 << "     |" << endl;
    cout << " | -----------------------------------------+---+-------------|" << endl;
    cout << " | Dasar-Dasar Komputasi                    | 2 |"
         << "      " << n6 << "     |" << endl;
    cout << " | -----------------------------------------+---+-------------|" << endl;
    cout << " | Pengantar Teknologi Informasi            | 2 |"
         << "      " << n7 << "     |" << endl;
    cout << " +------------------------------------------+---+-------------+ " << endl;
    cout << endl;

    totals = n1 + n2 + n3 + n4 + n5 + n6 + n7;
    average = totals / jmk;
    cout << " Total SKS        :   " << sks << endl;
    cout << " Total Nilai      :   " << totals << endl;
    cout << " Rata-Rata        :   " << average;
}

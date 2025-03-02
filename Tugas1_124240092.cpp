#include <iostream>
#include <iomanip>
using namespace std;

int menu, n = 0;
char kembalikemenu, pencarian_lagi;
struct database
{
    string nama;
    int harga, stok;
};
database data[100];
bool found = false;
void pilihanmenu();
void input();
void tampil();
void searching();
void bubblesort();
int binary_search(string carinama);
void sequential_search();
void ke_menu_utama();
void cari_lagi();

int main()
{
    do
    {
        pilihanmenu();
        cout << "Pilih : ";
        cin >> menu;
        switch (menu)
        {
        case 1:
            input();
            break;
        case 2:
            tampil();
            break;
        case 3:
            searching();
            break;
        case 4:
            cout << "Terima kasih! Program selesai.\n";
            system("pause");
            system("cls");
            return 0;
        default:
            cout << "Pilihan tidak ada.\n";
            system("pause");
            break;
        }
    } while (menu != 4);
    return 0;
}

void pilihanmenu()
{
    system("cls");
    cout << "==================================" << endl;
    cout << "          Toko Kelontong          " << endl;
    cout << "==================================" << endl;
    cout << "Menu" << endl;
    cout << "1. Input Data" << endl;
    cout << "2. Tampil Data" << endl;
    cout << "3. Pencarian Data" << endl;
    cout << "4. Keluar" << endl;
    cout << "----------------------------------" << endl;
}
void input()
{
    system("cls");
    int banyak;
    cout << "Input berapa data: "; cin >> banyak;
    for (int i = 0; i < banyak; i++)
    {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "Nama barang (huruf kecil) : "; cin.ignore(); getline(cin, data[n].nama);
        cout << "Harga barang\t\t  : "; cin >> data[n].harga;
        cout << "Stok barang\t\t  : "; cin >> data[n].stok;
        n++;
    }
    cout << "\nData barang berhasil ditambahkan" << endl;
    ke_menu_utama();
}
void tampil()
{
    system("cls");
    if (n == 0)
    {
        cout << "Data masih kosong. Silahkan input data terlebih dahulu di menu 1\n";
    }
    else
    {
        bubblesort();
        cout << setw(45) << setfill('=') << "" << endl;
        cout << left << setw(5) << setfill(' ') << "No."
                     << setw(20) << setfill(' ') << "Nama"
                     << setw(12) << setfill(' ') << "Harga"
                     << setw(6) << setfill(' ') << "Stok" << endl;
        cout << setw(45) << setfill(' ') << setfill('-') << "" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << left << setw(5) << setfill(' ') << i + 1
                         << setw(20) << setfill(' ') << data[i].nama
                         << setw(12) << setfill(' ') << data[i].harga
                         << setw(6) << setfill(' ') << data[i].stok << endl;
        }
        cout << setw(45) << setfill('=') << "" << endl;
    }
    ke_menu_utama();
}
void searching()
{
    system("cls");
    if (n == 0)
    {
        cout << "Data masih kosong. Silahkan input data terlebih dahulu di menu 1\n";
    }
    else
    {
        int cari;
        found = false;
        do
        {
            system("cls");
            cout << "Pilih metode pencarian:\n";
            cout << "1. Cari berdasarkan Nama (Binary Search)\n";
            cout << "2. Cari berdasarkan Harga (Sequential Search)\n";
            cout << "Pilih : ";
            cin >> cari;
            switch (cari)
            {
            case 1:
            {
                bubblesort();
                string carinama;
                cout << "\nMasukkan nama yang ingin dicari : ";
                cin.ignore();
                getline(cin, carinama);

                int hasilcari = binary_search(carinama);
                if (hasilcari != -1)
                {
                    cout << "\nBarang ditemukan!" << endl;
                    cout << "Nama\t: " << data[hasilcari].nama << endl;
                    cout << "Harga\t: " << data[hasilcari].harga << endl;
                    cout << "Stok\t: " << data[hasilcari].stok << endl;
                }
                else
                {
                    cout << "\nBarang tidak ditemukan!" << endl;
                }
                break;
            }
            case 2:
                sequential_search();
            }
            cari_lagi();
        } while (pencarian_lagi == 'y' && pencarian_lagi !='Y');
    }
    ke_menu_utama();
}
void bubblesort()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (data[j].nama > data[j + 1].nama)
            {
                swap(data[j], data[j + 1]);
            }
        }
    }
}
int binary_search(string carinama)
{
    int awal, tengah, akhir;
    awal = 0;
    akhir = n - 1;
    while (awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (data[tengah].nama == carinama)
        {
            return tengah;
        }
        if (carinama < data[tengah].nama)
        {
            akhir = tengah - 1;
        }
        else
        {
            awal = tengah + 1;
        }
    }
    return -1;
}
void sequential_search()
{
    int cariharga;
    found = false;
    cout << "\nMasukkan harga barang yang ingin dicari: ";
    cin >> cariharga;
    for (int i = 0; i < n; i++)
    {
        if (data[i].harga == cariharga)
        {
            cout << "\nBarang ditemukan!" << endl;
            cout << "Nama\t: " << data[i].nama << endl;
            cout << "Harga\t: " << data[i].harga << endl;
            cout << "Stok\t: " << data[i].stok << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "\nBarang tidak ditemukan.\n";
    }
}
void ke_menu_utama()
{
    do
    {
        cout << "\nKembali ke menu utama? (y/n): ";
        cin >> kembalikemenu;
        if (kembalikemenu == 'n' || kembalikemenu == 'N')
        {
            cout << "Terima kasih! Program selesai.\n";
            system("pause");
            system("cls");
            exit(0);
        }
        else if (kembalikemenu != 'y' && kembalikemenu != 'Y')
        {
            cout << "Pilihan tidak valid. Masukkan 'y' atau 'n'." << endl;
        }
    } while (kembalikemenu != 'y' && kembalikemenu != 'Y');
}
void cari_lagi(){
    do
    {
        cout << "\nApakah Anda ingin melakukan pencarian lagi? (y/n): "; cin >> pencarian_lagi;
        if (pencarian_lagi != 'y' && pencarian_lagi !='Y' && pencarian_lagi != 'n'&& pencarian_lagi != 'N')
        {
            cout << "Pilihan tidak valid. Masukkan 'y' atau 'n'.\n";
        }
    } while (pencarian_lagi != 'y' && pencarian_lagi !='Y' && pencarian_lagi != 'n'&& pencarian_lagi != 'N');
}
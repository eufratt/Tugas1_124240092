

# Toko Kelontong - Program C++

Program ini adalah aplikasi **manajemen data barang pada toko kelontong** berbasis C++.
Fitur utama mencakup: input data, menampilkan daftar barang, dan pencarian data berdasarkan nama atau harga. ([GitHub][1])

## Fitur

* Tambah data barang (nama, harga, stok) ([GitHub][1])
* Tampilkan data barang yang sudah diurutkan berdasarkan nama ([GitHub][1])
* Cari data barang berdasarkan:

  * Nama barang (binary search) ([GitHub][1])
  * Harga barang (sequential search) ([GitHub][1])
* Ulangi pencarian sampai pengguna berhenti ([GitHub][1])
* Navigasi kembali ke menu utama atau keluar dari program ([GitHub][1])

## Struktur Program

* **main** - Menampilkan menu utama dan menerima pilihan user ([GitHub][1])
* **input** - Input jumlah barang dan detailnya ([GitHub][1])
* **tampil** - Menampilkan seluruh barang (urut alfabet) ([GitHub][1])
* **searching** - Menu pencarian data ([GitHub][1])
* **bubblesort** - Mengurutkan nama barang ([GitHub][1])
* **binary_search** - Cari barang berdasarkan nama ([GitHub][1])
* **sequential_search** - Cari barang berdasarkan harga ([GitHub][1])
* **ke_menu_utama & cari_lagi** - Navigasi user ([GitHub][1])

## Cara Menjalankan

1. Pastikan compiler C++ terpasang (misal g++).
2. Clone repo ini.
3. Compile program:

   ```
   g++ Tugas1_124240092.cpp -o toko_kelontong
   ```
4. Jalankan:

   ```
   ./toko_kelontong
   ```

## Contoh Penggunaan

1. Pilih **1** untuk input data barang.
2. Setelah selesai, kembali ke menu utama.
3. Pilih **2** untuk melihat daftar barang terurut.
4. Pilih **3** untuk mencari barang berdasarkan nama atau harga.
5. Pilih **4** untuk keluar dari program.

## License

Program ini bersifat open source dan bebas digunakan untuk tugas atau pembelajaran.


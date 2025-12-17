
# Toko Kelontong - Sorting dan Searching (C++)

Program ini merupakan aplikasi sederhana berbasis **C++** untuk mengelola data barang pada **toko kelontong**.
Program menyediakan fitur input data, menampilkan data yang telah diurutkan, serta pencarian data menggunakan **Binary Search** dan **Sequential Search**.

## Deskripsi Program

Data barang disimpan dalam bentuk **array struct** yang berisi nama, harga, dan stok.
Sebelum dilakukan pencarian berdasarkan nama, data akan diurutkan terlebih dahulu menggunakan **Bubble Sort** agar Binary Search dapat bekerja dengan benar.

## Fitur Program

1. **Input Data Barang**

   * Menyimpan nama barang, harga, dan stok
   * Data disimpan ke dalam array
   * Jumlah data maksimal 100 barang

2. **Tampilkan Data Barang**

   * Menampilkan seluruh data barang dalam bentuk tabel
   * Data diurutkan berdasarkan **nama barang (ascending)** menggunakan Bubble Sort

3. **Pencarian Data**

   * Pencarian berdasarkan **nama barang** menggunakan Binary Search
   * Pencarian berdasarkan **harga barang** menggunakan Sequential Search
   * Dapat melakukan pencarian berulang

4. **Navigasi Menu**

   * Kembali ke menu utama
   * Keluar dari program

## Struktur Data

```cpp
struct database {
    string nama;
    int harga;
    int stok;
};
```

## Algoritma yang Digunakan

* **Bubble Sort**

  * Digunakan untuk mengurutkan data berdasarkan nama barang
* **Binary Search**

  * Digunakan untuk mencari barang berdasarkan nama
  * Data harus sudah terurut
* **Sequential Search**

  * Digunakan untuk mencari barang berdasarkan harga

## Struktur Program

```
/
├─ Tugas1_124240092.cpp   # Source code utama
└─ README.md              # Dokumentasi
```

## Cara Menjalankan Program

1. Pastikan compiler C++ sudah terpasang (contoh: g++)
2. Compile program:

   ```
   g++ Tugas1_124240092.cpp -o toko_kelontong
   ```
3. Jalankan program:

   ```
   ./toko_kelontong
   ```

> Catatan: Program menggunakan `system("cls")` dan `system("pause")`, sehingga disarankan dijalankan di Windows.

## Alur Penggunaan Program

1. Pilih menu **Input Data** untuk memasukkan barang
2. Pilih menu **Tampil Data** untuk melihat data yang sudah diurutkan
3. Pilih menu **Pencarian Data** untuk mencari barang berdasarkan nama atau harga
4. Pilih **Keluar** untuk mengakhiri program

## Tujuan Pembelajaran

* Memahami penggunaan array dan struct
* Menerapkan algoritma sorting dan searching
* Memahami perbedaan Binary Search dan Sequential Search
* Melatih logika pemrograman terstruktur

## License

Program ini dibuat untuk **keperluan pembelajaran dan tugas kuliah**.

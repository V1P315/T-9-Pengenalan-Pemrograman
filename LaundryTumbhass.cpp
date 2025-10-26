// Menyertakan library iostream agar kita bisa menggunakan cout (output) dan cin (input)
#include <iostream> 
// Menyertakan library string agar kita bisa menggunakan tipe data 'string' untuk nama
#include <string>   

// Memberitahu program bahwa kita akan menggunakan standar namespace (std),
// sehingga kita bisa menulis 'cout' saja, bukan 'std::cout'
using namespace std; 

// Fungsi utama, program akan dimulai dari sini
int main() {
    // Mendeklarasikan variabel integer bernama 'batas'
    // 'batas' akan digunakan untuk menentukan ukuran array (jumlah pelanggan)
    int batas; 
    
    // Menampilkan judul program ke layar
    cout << "||==--. Laundry Tumbhasss .--==||" << endl << endl; 
    
    // Meminta pengguna untuk memasukkan jumlah pelanggan
    cout << "Masukan jumlah pelanggan: "; 
    
    // Menyimpan angka yang diketik pengguna ke dalam variabel 'batas'
    cin >> batas; 

    // Mendeklarasikan array 1D bertipe string dengan ukuran sesuai 'batas'
    // Ini akan menyimpan semua nama pelanggan
    string nama_pelanggan[batas];  
    
    // Mendeklarasikan array 2D bertipe integer
    // 'batas' menentukan jumlah baris (pelanggan)
    // '2' menentukan jumlah kolom (untuk 'jumlah' dan 'harga')
    int nilai[batas][2];         

    // Memulai loop 'for' untuk menginput data pelanggan
    // 'int i = 0;' -> inisialisasi counter 'i' mulai dari 0
    // 'i < batas;' -> loop akan terus berjalan selama 'i' kurang dari 'batas'
    // 'i++'        -> 'i' akan bertambah 1 setiap kali loop selesai
    for (int i = 0; i < batas; i++) { 
        // Mencetak baris baru dan info pelanggan ke- (i+1)
        // (i+1) digunakan agar hitungan mulai dari 1, bukan 0
        cout << "\nPelanggan ke-" << i + 1 << endl; 
        
        // Meminta pengguna memasukkan nama
        cout << "Nama Pelanggan : "; 
        
        // Menyimpan nama ke array 'nama_pelanggan' pada indeks ke-'i'
        cin >> nama_pelanggan[i];  

        // Meminta pengguna memasukkan jumlah (kg)
        cout << "Jumlah (kg)    : "; 
        
        // Menyimpan jumlah ke array 'nilai' pada baris ke-'i', kolom ke-0
        cin >> nilai[i][0]; 

        // Meminta pengguna memasukkan harga
        cout << "Harga          : "; 
        
        // Menyimpan harga ke array 'nilai' pada baris ke-'i', kolom ke-1
        cin >> nilai[i][1]; 
    } // Loop input selesai, kembali ke atas jika 'i < batas' masih true

    // Mencetak judul untuk daftar output data
    cout << "\n\nDaftar Data Laundry:\n"; 
    
    // Memulai loop 'for' baru untuk menampilkan data yang sudah disimpan
    for (int i = 0; i < batas; i++) { 
        // Menampilkan nama pelanggan dari array 'nama_pelanggan' indeks ke-'i'
        cout << "Pelanggan ke-" << i + 1 << ": " << nama_pelanggan[i]; 
        
        // Menampilkan jumlah dari array 'nilai' baris ke-'i', kolom ke-0
        cout << ", Jumlah: " << nilai[i][0] << " kg"; 
        
        // Menampilkan harga dari array 'nilai' baris ke-'i', kolom ke-1
        cout << ", Harga: Rp" << nilai[i][1]; 
        
        // Pindah ke baris baru sebelum mengulang loop
        cout << endl; 
    } // Loop output selesai, kembali ke atas jika 'i < batas' masih true

    // Mengembalikan nilai 0, menandakan program selesai tanpa error
    return 0; 
}

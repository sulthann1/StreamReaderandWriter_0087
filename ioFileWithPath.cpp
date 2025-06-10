#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string NamaFile;

    cout << "Masukan nama file :";
    cin >> NamaFile;

    // membuka file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    // unlimited loop untuk menulis
    while (true)
    {
        cout << "-";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q")
            break;
        // menulis dan memasukan nilai dari 'baris' kedlam file
        outfile << baris << endl;
    }

        // selesai dalam menulis sekarang tutup file nya
        outfile.close();
        // membuka file dalam metode membaca
        ifstream infile;
        // menunjuk ke sebuah file
        infile.open(NamaFile, ios ::in);
        cout << endl
             << ">= Membuka dan membaca file" << endl;
        if (infile.is_open())
        {
            // melakukan perulangan setiap baris
            while (getline(infile, baris))
            {
                // dan tampilkan disini
                cout << baris << endl;
            }

             // tutup file tersebut  setelah selesai
            infile.close();
        }
        

        //jika tidak ditemukan maka akan menampilkan 
        else cout << "Unable to open file";
        return 0;
}
       
    





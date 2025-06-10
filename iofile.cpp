#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    // menambahkan file ke dalam mode menulis
    ofstream outfile;

    // menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file. \'q\' untuk keluar " << endl;

    // unlimited loop untuk menulis
    while (true)
    {
        cout << "_";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);

        //loop akan berhenti jika memasukan karakter q
        if (baris =="q") break;

        //menulis dan memasukan nilai dari 'baris' kedalam file
        outfile << baris <<endl;       
    }

     //selesai dalam menulis sekarang tutup file nya
        outfile.close();
        //membuka file dalam momde membaca

    ifstream infile;
    
    //menunjuk ke sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">= membuka dan membaca file" << endl;

    //jika file ada maka
    if (infile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline (infile,baris))
        {
            //dam tampilkan di sini
            cout << baris << "\n";
        }
    }
};

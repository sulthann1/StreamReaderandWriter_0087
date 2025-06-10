#include <iostream>
#include <exception>

//untuk obyek exception yang akan digunakan
#include <array>

//untuk array yang akan digunakan
using namespace std;

int main()
{
    cout << "awal program" <<endl; //penanda 1:......
    try {
        array <int, 3> data= {10,20,30};
        //pesan array integer 3 elemen
        cout << data.at (5) <<endl;
    }

    catch (exception& e ) {
        //p
    }
}
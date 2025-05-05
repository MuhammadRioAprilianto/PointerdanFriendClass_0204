#include <iostream>
using namespace std;

class Dosen
{
    public:
    string nama;
    void tampilNama()
    {
        cout << "Namanya adalah " << nama << endl;
    }
};

class staff
{
    public:
    int nidn;
};

int main()
{
    Dosen ds;
    ds.nama = "Giga";
    ds.tampilNama();

    Dosen &dsref = ds;
    dsref.nama = "joko";
    cout << "Alamat Memori = " << &dsref << endl;
    dsref.tampilNama();
    
}
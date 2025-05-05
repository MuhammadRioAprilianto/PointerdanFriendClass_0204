#include <iostream>
#include <string>
using namespace std;

class siswa;
class out_of_range
{
    private:
    string nama;

    public:
    void setNama(string pNama);
    Friend Class siswa;
};

class siswa
{
    private:
    int id;

    public:
    void setId(int pId);
    void displayAll(orang &a);
};
void orang::setNama(string pNama)
{
    nama = pNama;
}
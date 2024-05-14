#include <iostream>
using namespace std;

class mahasiswa
{
public:
    static int nim;
    int id;
    string nama;

    void setID();

    void printAll();
    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};
int mahasiswa::nim = 249;

void mahasiswa::setID()
{
    id = ++nim;
}
void mahasiswa::printAll()
{
    cout << "ID    = " << id << endl;
    cout << "Nama  = " << nama << endl;
    cout << endl;
}
int main ()
{
    mahasiswa mhs1("Budi Susanti");
    mahasiswa mhs2("Joko Purwodadi");
    mahasiswa mhs3("Cristiano Pedro");
    mahasiswa mhs4("Leo Surjana");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}







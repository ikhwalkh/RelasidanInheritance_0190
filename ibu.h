#ifndef IBU_H
#define IBU_H
#include <vektor>

class ibu {
    public:
    string nama;
    vektor<anak*> daftar_anak;

    ibu(string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
};
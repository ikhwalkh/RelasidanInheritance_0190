#include <iostream>
#include <vector>
using namespace std;

class user {
protected:
    static int globalId;

public:
    int id;
    string nama;
    string email;

    user(string pNama, string pEmail) {
        id = generateId();
        nama = pNama;
        email = pEmail;
    }

    static int generateId() {
        return ++globalId;
    }
};

int user::globalId = 0;

class member : public user {
public:
    bool status;

    member(string pNama, string pEmail, bool pStatus)
        : user(pNama, pEmail) {
        status = pStatus;
    }

    void showProfile() {
        cout << "===== Profile Member =====" << endl;
        cout << "ID     : " << id << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Email  : " << email << endl;
        cout << "Status : " << (status ? "Aktif" : "Nonaktif") << endl;
        cout << endl;
    }
};

class admin : public user {
public:
    admin(string pNama, string pEmail)
        : user(pNama, pEmail) {}

    void showAllMember(vector<member*> daftarMember) {
        cout << "===== Daftar Member =====" << endl;

        for (auto& m : daftarMember) {
            cout << "ID     : " << m->id << endl;
            cout << "Nama   : " << m->nama << endl;
            cout << "Email  : " << m->email << endl;
            cout << "Status : "
                 << (m->status ? "Aktif" : "Nonaktif") << endl;
            cout << "-------------------------" << endl;
        }
    }
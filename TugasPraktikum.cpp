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
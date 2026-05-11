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
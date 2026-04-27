#include <iostream>
#include <string>
using namespace std;

class orang
{
private:
    string nama;

public:
    void setName(string pNama);
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
};

void orang::setName(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pId)
{
    id = pId;
}

int main()
{
    return 0;
}
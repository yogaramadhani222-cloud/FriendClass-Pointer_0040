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
void orang::setName(string pNama)
{
    nama = pNama;
}
int main()
{
    return 0;
}
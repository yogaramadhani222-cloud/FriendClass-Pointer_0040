#include <iostream>
using namespace std;
class mahasiswa
{
    public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1};       //Object mhs
    mhs.showNim();    //member access operator

    mahasiswa &refmhs = mhs; //Pointer Reference refmhs
    refmhs.nim = 2; //member access operator
    refmhs.showNim();

    mahasiswa *pMhs = &mhs; //Pointer Reference pmhs
    pMhs->nim = 3; //Arrow operator
    pMhs->showNim();
    return 0;
}
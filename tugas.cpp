#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;
class LayangLayang
{
private:
    double d1, d2, a, b;
public:
    void inputData()
    {
        cout << "Input Layang-layang" << endl;
        cout << "diagonal 1: "; cin >> d1;
        cout << "diagonal 2: "; cin >> d2;
        cout << "sisi a: "; cin >> a;
        cout << "sisi b: "; cin >> b;
    }

    double hitungluas()
    {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang &, BelahKetupat &);
};

class BelahKetupat
{
private:
    double d1, d2; 
    double s;

public:
    void inputData()
    {
        cout << "\nInput Belah Ketupat" << endl;
        cout << "diagonal 1: "; cin >> d1;
        cout << "diagonal 2: "; cin >> d2;
        cout << "sisi: "; cin >> s;
    }

    double hitungluas()
    {
        return 0.5 * d1 * d2;
    }

    friend void tampilkanKeliling(LayangLayang &, BelahKetupat &);
};

void tampilkanKeliling(LayangLayang &L, BelahKetupat &B)
{
    double kelilingL = 2 * (L.a + L.b);
    double kelilingB = 4 * B.s;

    cout << "\n--- Keliling ---" << endl;
    cout << "Keliling Layang-layang: " << kelilingL << endl;
    cout << "Keliling Belah Ketupat: " << kelilingB << endl;
}

int main()
{
    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelah;
    return 0;
}
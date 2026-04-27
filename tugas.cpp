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
};

class BelahKetupat
{
private:
    double d1, d2, s;
public:
};

int main()
{
    return 0;
}
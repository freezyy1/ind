#include <iostream>
#include <cmath>
using namespace std;
class tringle
{
public:
    double a = 0, b = 0, c = 0;

    bool exst_tr()
    {
        return (a+b >= c && a+c >= b && b+c >= a);
    }
    void set(double a1, double b1, double c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void show()
    {
        cout << a << " " << b << " " << c;
    }
    double perimetr()
    {
        return (a+b+c);
    }
    double square()
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

int main()
{

    tringle trarr[3];

    float j1, j2, j3;

    int str = 0;
    while (str < 3)
    {
        cout << "стороны треугольника\n";
        cin >> j1 >> j2 >> j3;
        trarr[str].set(j1, j2, j3);
        if (trarr[str].exst_tr())
        {
            str += 1;
        }
        else
        {
            cout << "не существует\n";
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "треугольник " << i+1 << " периметр " << trarr[i].perimetr() << " площадь " << trarr[i].square() << "\n";
    }

    return 0;
}
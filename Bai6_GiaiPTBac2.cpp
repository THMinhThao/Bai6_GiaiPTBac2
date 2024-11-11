// Bai6_GiaiPTBac2.cpp : 
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "CHUONG TRINH GIAI PHUING TRINH BAC 2\n";
    double a, b, c, delta, x1, x2;

    cout << "Nhap a:"; cin >> a;
    cout << "Nhap b:"; cin >> b;
    cout << "Nhap c:"; cin >> c;
    if (a == 0) {
        // Giai pt bac 1 : bx +c = 0
        if (b != 0)
        {
            cout << "PHUONG TRINH CO HAI NGHIEM DUY NHAT X=" << -c / b << endl;
        }
        else {
            if (c != 0)
            {
                cout << "Phuong Trinh Vo Nghiem\n";
            }
            else {
                cout << "Phuong Trinh Vo So Nghiem\n";
            }
        }
    }
    else {
        // Giai pt bac 2
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phuong Trinh Vo Nghiem\n";
        }
        else if (delta == 0) {
            cout << "Phuong Trinh Co Nghiem Kep x1 = x2 =" << -b /(2 * a) << endl;
        } else {
            // Delta lon hon 0 
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong Trinh Co 2 Nghiem\n";
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;

        }
    }
    return 0;

}

#include <iostream>
#include <iomanip>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "xp: "; cin >> x_p;
    cout << "xk: "; cin >> x_k;
    cout << "dx: "; cin >> dx;
    cout << "eps: "; cin >> e;
    cout << endl;

    // Заголовок таблиці
    cout << setw(10) << "x"
        << setw(15) << "sum"
        << setw(15) << "ln(x)"
        << setw(15) << "n" << endl;

    // Обчислення значень для кожного x
    x = x_p;
    while (x <= x_k) {
        sum(); // Викликаємо функцію обчислення суми ряду
        cout << setw(10) << fixed << setprecision(5) << x
            << setw(15) << s
            << setw(15) << log(x)
            << setw(15) << n << endl;
        x += dx;
    }

    return 0;
}
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 1; 
    a = (x - 1) / x; // Ініціалізуємо перший доданок
    s = a; // Початкова сума
    do {
        n++;
        dod(); // Обчислюємо наступний доданок за допомогою рекурентного відношення
        s += a;
    } while (fabs(a) > e); // Умовa зупинки - коли модуль доданка менший за e
}
#include "dod.h"
#include "var.h"
using namespace nsVar;

void nsDod::dod() {
    a *= (x - 1) / x; // Множимо на (x - 1) / x
    a /= n; // Ділимо на (n + 1), де n вже збільшений в sum()
}

#include "dod.h"
#include "var.h"
using namespace nsVar;

void nsDod::dod() {
    a *= (x - 1) / x; // ������� �� (x - 1) / x
    a /= n; // ĳ���� �� (n + 1), �� n ��� ��������� � sum()
}

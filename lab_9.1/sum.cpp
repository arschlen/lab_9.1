#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 1; 
    a = (x - 1) / x; // ���������� ������ �������
    s = a; // ��������� ����
    do {
        n++;
        dod(); // ���������� ��������� ������� �� ��������� ������������ ���������
        s += a;
    } while (fabs(a) > e); // ����a ������� - ���� ������ ������� ������ �� e
}
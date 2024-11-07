#include "pch.h"
#include "CppUnitTest.h"
#include "..//lab_9.1/var.h"
#include "..//lab_9.1/dod.h"
#include "..//lab_9.1/sum.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Ініціалізація вхідних значень
			x = 2.0;    // Приклад значення x для перевірки
			e = 0.0001; // Точність
			sum();      // Викликаємо функцію для обчислення суми ряду

			// Перевірка результату
			double expected_ln = log(x); // Очікуване значення ln(x)
			Assert::AreEqual(expected_ln, s, 0.0001, L"Помилка у значенні суми ряду s");

			// Додаткова перевірка кількості доданків
			Assert::IsTrue(n > 0, L"Кількість доданків має бути більше нуля");
		}
	};
}

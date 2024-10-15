#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s;
			int n;
			S(0.5, 0.0001, n, s);
			double expectedS = log(0.5 + 1);
			Assert::AreEqual(expectedS, s, 0.0001, L"Функція S дала неправильний результат для x = 0.5");

			double a = 0; // Початковий член ряду для x = 0.5
			A(0, 1, a);   // Обчислюємо другий член ряду для n = 1
			double expectedA = 0; // За формулою A має дати -0.25
			Assert::AreEqual(expectedA, a, 0.0001, L"Функція A дала неправильний результат для n = 1");

		}
	};
}

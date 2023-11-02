#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab612ut
{
	TEST_CLASS(lab612ut)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 20;
			int t[size];
			// Заповніть масив 't' потрібними значеннями для вашого тесту

			int count = 0, totalSum = 0;
			calculateCriteria(t, size, count, totalSum);

			// Додайте перевірки для 'count' і 'totalSum' за очікуваними значеннями
			Assert::AreEqual(0, count);
			Assert::AreEqual(0, totalSum);
			}
		};
	};

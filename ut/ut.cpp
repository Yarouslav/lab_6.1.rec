#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut
{
	TEST_CLASS(ut)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 20;
			int t[size];
			create(t, size);
			Assert::AreEqual(2, create(t, size), 0.00001);
			}
		TEST_METHOD(TestMethod2) {
			const int size = 20;
			int t[size];
			create(t, size);

			replaceWithZeros(t, size);
			Assert::AreEqual(replaceWithZeros, 0, 0.1);
			}
		};
	}

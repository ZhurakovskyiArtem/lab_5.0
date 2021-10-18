#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int main()
			{
				double s, t;
				cout << "s = "; cin >> s;
				cout << "t = "; cin >> t;
				double c = h(s, t) * h(s, t) * h(s, t) * h(s, t) + h(1, s * s + t * t) / 1 + h(s * t, 1) * h(s * t, 1);
				cout << "c = " << c << endl;
				return 0;
			}
			double h(const double a, const double b) // визначення
			{
				return a / (b * b + 1) + (1 / (a * a + b * b));

				Assert::AreEqual(h, 5);
			}
		}
	};
}

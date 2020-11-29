#include "pch.h"
#include "CppUnitTest.h"
#include "..\Task3\Task3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTwo
{
	TEST_CLASS(UnitTestTwo)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int m = 3, n = 2;
			vector<vector<int>> vector_of_vector =
			{
				{7, 12},
				{3, 0},
				{2, 22}
			};
			vector<int> vector_of_int = FromTableToLine(vector_of_vector, m, n);
			vector<int> temp_vector_of_int = { 7, 12, 3, 0, 2, 22 };
			Assert::IsTrue(vector_of_int == temp_vector_of_int);
		}
		TEST_METHOD(TestMethod2)
		{
			int m = 3, n = 2;
			vector<int> vector_of_int = { 2, 3, 5, 6, 8, 10 };
			vector<vector<int>> vector_of_vector = FromLineToTable(vector_of_int, m, n);
			vector<vector<int>> temp_vector_of_vector =
			{
				{2, 3},
				{5, 6},
				{8, 10}
			};
			Assert::IsTrue(vector_of_vector == temp_vector_of_vector);
		}
	};
}

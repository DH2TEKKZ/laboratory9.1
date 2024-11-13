#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory9.1/laboratory9.1.cpp"
#include "../laboratory9.1/sum.cpp"
#include "../laboratory9.1/dod.cpp"
#include "../laboratory9.1/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
	TEST_CLASS(UnitTest91)
	{
	public:
		
        TEST_METHOD(TestSum_CorrectIteration)
        {
            nsVar::x_p = 1.0;
            nsVar::x_k = 2.0;
            nsVar::dx = 0.1;
            nsVar::e = 0.001;

            nsVar::x = nsVar::x_p;  
            int iterationCount = 0;

            while (nsVar::x < nsVar::x_k)
            {
                nsSum::sum();   
                nsVar::x += nsVar::dx;
                iterationCount++;
            }

            Assert::AreEqual(10, iterationCount, L"Error!");
        }
	};
}

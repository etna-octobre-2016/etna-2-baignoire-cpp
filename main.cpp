#include <iostream>
#include "etape_4/ClassTest.h"

int main(int argc, char const *argv[])
{
    try
    {
        ClassTest *test;

        test = &ClassTest::getInstance();
        std::cout << test->test("toto", true);
        return 0;
    }
    catch (std::string e)
    {
        std::cout << e;
        return 1;
    }
}

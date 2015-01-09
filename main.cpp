#include <iostream>
#include "etape_4/ClassTest.h"

int main(int argc, char const *argv[])
{
    try
    {
        ClassTest *test;

        test = ClassTest::getInstance();
        ClassTest::destroy();
        test = ClassTest::getInstance();
        ClassTest::destroy();
        test = ClassTest::getInstance();
        test = ClassTest::getInstance();
        test->setUnAttribut(1000);
        std::cout << test->getUnAttribut();
        std::cout << test->test("foobarland", true);
        std::cout << test->test("foobarland", false);
        return 0;
    }
    catch (std::string e)
    {
        std::cout << e;
        return 1;
    }
}

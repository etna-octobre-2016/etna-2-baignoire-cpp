#include <iostream>
#include "etape_3/ClassTest.h"

int main(int argc, char const *argv[])
{
    ClassTest test;

    test.setUnAttribut(1000);
    std::cout << test.getUnAttribut();
    std::cout << test.test("foobarland", true);
    std::cout << test.test("foobarland", false);
    return 0;
}

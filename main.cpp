#include <iostream>
#include "etape_3/ClassTest.h"

int main(int argc, char const *argv[])
{
    ClassTest test;

    test.setUnAttribut(5);
    std::cout << test.getUnAttribut();
    std::cout << test.test();
    return 0;
}

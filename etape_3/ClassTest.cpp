#include "ClassTest.h"

using namespace std;

int     ClassTest::getUnAttribut()
{
    return unAttribut;
}
void    ClassTest::setUnAttribut(int value)
{
    unAttribut = value;
}
string  ClassTest::test()
{
    return "en test";
}
string  ClassTest::test(string str)
{
    return str;
}
string  ClassTest::test(string str, bool endLine)
{
    if (endLine == true)
    {
        return test(str) + "\n";
    }
    return test(str);
}

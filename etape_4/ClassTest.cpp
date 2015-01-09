#include "ClassTest.h"

using namespace std;

// ATTRIBUTES
///////////////////////////////////////////////////////////////

bool        ClassTest::alreadyInstanciated = false;
ClassTest*  ClassTest::instance = NULL;

// PUBLIC METHODS
///////////////////////////////////////////////////////////////

void        ClassTest::destroy()
{
    if (ClassTest::alreadyInstanciated)
    {
        delete ClassTest::instance;
    }
}
ClassTest*  ClassTest::getInstance()
{
    if (!ClassTest::alreadyInstanciated)
    {
        ClassTest::instance            = new ClassTest();
        ClassTest::alreadyInstanciated = true;
    }
    return ClassTest::instance;
}
int         ClassTest::getUnAttribut()
{
    return this->unAttribut;
}
void        ClassTest::setUnAttribut(int value)
{
    this->unAttribut = value;
}
string      ClassTest::test()
{
    return "en test";
}
string      ClassTest::test(string str)
{
    return str;
}
string      ClassTest::test(string str, bool endLine)
{
    if (endLine == true)
    {
        return this->test(str) + "\n";
    }
    return this->test(str);
}

// PRIVATE METHODS
///////////////////////////////////////////////////////////////

ClassTest::~ClassTest()
{
    ClassTest::alreadyInstanciated = false;
}
ClassTest::ClassTest()
{
    this->unAttribut = 0;
}

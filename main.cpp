#include "etape_6/FileStreamImpl.h"

int main(int argc, char const *argv[])
{
    try
    {
        FileStreamImpl fs;

        std::cout << fs.read();
        return 0;
    }
    catch (std::string e)
    {
        std::cout << e;
        return 1;
    }
}

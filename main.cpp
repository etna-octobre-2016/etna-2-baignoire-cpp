#include "etape_6/FileStreamImpl.h"

int main(int argc, char const *argv[])
{
    try
    {
        FileStreamImpl  fs;
        std::string     test;
        std::string     filePath;

        test = "foobar\n";
        filePath = "/Users/ahemt_s/Desktop/toto.txt";
        fs.open(filePath);
        fs.write(test);
        std::cout << fs.read() << "\n";
        test = "toto\n";
        fs.write(test);
        std::cout << fs.read() << "\n";
        fs.close();
        return 0;
    }
    catch (const char *e)
    {
        std::cout << e;
        return 1;
    }
}

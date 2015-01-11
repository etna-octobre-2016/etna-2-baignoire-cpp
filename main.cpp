#include "etape_6/FileStreamImpl.h"

int main(int argc, char const *argv[])
{
    try
    {
        FileStreamImpl  fs;
        std::string     test;
        std::string     filePath;

        test = "foobar";
        filePath = "/Users/ahemt_s/Desktop/toto.txt";
        std::cout << fs.open(filePath) << "\n";
        std::cout << "written: " << fs.write(test) << "\n";
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

#include "etape_6/FileStreamImpl.h"

int main(int argc, char const *argv[])
{
    try
    {
        FileStreamImpl  fs;
        std::string     line;
        std::string     filePath;

        line = "Je suis une fougere\n";
        filePath = "/Users/ahemt_s/Desktop/toto.txt";
        std::cout << fs.open(filePath);
        fs.write(line);
        return 0;
    }
    catch (std::string e)
    {
        std::cout << e;
        return 1;
    }
}

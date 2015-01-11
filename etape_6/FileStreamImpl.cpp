#include "FileStreamImpl.h"

// CONSTRUCTOR / DESTRUCTOR
//////////////////////////////////////////////////////////

FileStreamImpl::FileStreamImpl()
{
    this->currentLineContent = "";
}

FileStreamImpl::~FileStreamImpl()
{
    this->close();
}

// PUBLIC METHODS
//////////////////////////////////////////////////////////

bool FileStreamImpl::close()
{
    if (this->fileInput.is_open() && this->fileOutput.is_open())
    {
        this->fileInput.close();
        this->fileOutput.close();
        return true;
    }
    return false;
}

bool FileStreamImpl::open(std::string& filePath)
{
    this->fileOutput.open(filePath.c_str(), std::ios_base::out);
    if (this->fileOutput.is_open())
    {
        this->fileInput.open(filePath.c_str(), std::ios_base::in);
        if (this->fileInput.is_open())
        {
            return true;
        }
    }
    return false;
}

std::string& FileStreamImpl::read()
{
    std::getline(this->fileInput, this->currentLineContent);
    return this->currentLineContent;
}

int FileStreamImpl::write(std::string& line)
{
    int lineLength;
    int writtenCharactersCount;

    writtenCharactersCount = 0;
    if (this->fileOutput.is_open())
    {
        lineLength = line.length();
        this->fileOutput.write(line.c_str(), lineLength);
        if (this->fileOutput.good())
        {
            writtenCharactersCount = lineLength;
        }
    }
    this->fileOutput.seekp(0);
    return writtenCharactersCount;
}

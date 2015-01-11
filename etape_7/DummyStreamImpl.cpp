#include "DummyStreamImpl.h"

// CONSTRUCTOR / DESTRUCTOR
//////////////////////////////////////////////////////////

DummyStreamImpl::DummyStreamImpl()
{
    this->currentLineContent = "";
}

DummyStreamImpl::~DummyStreamImpl()
{
    this->close();
}

// PUBLIC METHODS
//////////////////////////////////////////////////////////

bool DummyStreamImpl::close()
{
    if (this->fileInput.is_open() && this->fileOutput.is_open())
    {
        this->fileInput.close();
        this->fileOutput.close();
        return true;
    }
    return false;
}

bool DummyStreamImpl::open(std::string& filePath)
{
    this->fileOutput.open(filePath.c_str(), std::ios_base::out | std::ios_base::app);
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

std::string& DummyStreamImpl::read()
{
    std::getline(this->fileInput, this->currentLineContent);
    return this->currentLineContent;
}

int DummyStreamImpl::write(std::string& line)
{
    int lineLength;
    int writtenCharactersCount;
    int currentLine;

    writtenCharactersCount = 0;
    if (this->fileOutput.is_open())
    {
        lineLength = line.length();
        currentLine = this->fileInput.tellg();
        this->fileOutput.write(line.c_str(), lineLength);
        if (this->fileOutput.good())
        {
            writtenCharactersCount = lineLength;
            this->fileOutput.seekp(currentLine);
        }
    }
    return writtenCharactersCount;
}

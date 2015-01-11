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
    return true;
}

bool DummyStreamImpl::open(std::string& filePath)
{
    return true;
}

std::string& DummyStreamImpl::read()
{
    return this->currentLineContent;
}

int DummyStreamImpl::write(std::string& line)
{
    return 1;
}

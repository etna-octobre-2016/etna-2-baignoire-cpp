#include "FileStreamImpl.h"

// CONSTRUCTOR / DESTRUCTOR
//////////////////////////////////////////////////////////

FileStreamImpl::FileStreamImpl()
{
	this->fileLine = "foobarland\n";
	std::cout << "instanciated\n";
}

FileStreamImpl::~FileStreamImpl()
{
	std::cout << "destroyed\n";
}

// PUBLIC METHODS
//////////////////////////////////////////////////////////

bool FileStreamImpl::close()
{
	return true;
}

bool FileStreamImpl::open(std::string& filePath)
{
	return true;
}

std::string& FileStreamImpl::read()
{
	return this->fileLine;
}

int FileStreamImpl::write(std::string& line)
{
	return 1;
}

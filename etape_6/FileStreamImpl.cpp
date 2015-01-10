#include "FileStreamImpl.h"

// CONSTRUCTOR / DESTRUCTOR
//////////////////////////////////////////////////////////

FileStreamImpl::FileStreamImpl()
{
	this->currentLine = "";
}

FileStreamImpl::~FileStreamImpl()
{
	this->close();
}

// PUBLIC METHODS
//////////////////////////////////////////////////////////

bool FileStreamImpl::close()
{
	if (this->file.is_open())
	{
		this->file.close();
		return true;
	}
	return false;
}

bool FileStreamImpl::open(std::string& filePath)
{
	this->file.open(filePath, std::ios_base::in | std::ios_base::out);
	if (this->file.is_open())
	{
		return true;
	}
	return false;
}

std::string& FileStreamImpl::read()
{
	return this->currentLine;
}

int FileStreamImpl::write(std::string& line)
{
	return 1;
}

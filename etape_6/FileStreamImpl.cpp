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
	this->file.open(filePath, std::ios_base::in | std::ios_base::out | std::ios_base::app);
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
	int lineLength;
	int writtenCharactersCount;

	writtenCharactersCount = 0;
	if (this->file.is_open())
	{
		lineLength = line.length();
		this->file.write(line.c_str(), lineLength);
		if (this->file.good())
		{
			writtenCharactersCount = lineLength;
		}
	}
	return writtenCharactersCount;
}

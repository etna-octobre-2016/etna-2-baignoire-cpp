#include "FileStreamImpl.h"

// CONSTRUCTOR / DESTRUCTOR
//////////////////////////////////////////////////////////

FileStreamImpl::FileStreamImpl()
{
	this->resetAttributes();
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
		this->resetAttributes();
		return true;
	}
	return false;
}

bool FileStreamImpl::open(std::string& filePath)
{
	this->file.open(filePath, std::ios_base::in | std::ios_base::out | std::ios_base::app);
	if (this->file.is_open())
	{
		this->filePath = filePath;
		return true;
	}
	return false;
}

std::string& FileStreamImpl::read()
{
	// static int 				line;
	// static bool 			eof;
	// static std::string 		tmp;
	// static std::ifstream 	file(this->filePath);
	//
	// if (file.is_open())
	// {
	// 	eof  = true;
	// 	line = 1;
	// 	while (std::getline(file, tmp))
	// 	{
	// 		std::cout << "line = " << line << " current line = " << this->currentLine << "\n";
	// 		if (line > this->currentLine)
	// 		{
	// 			eof = false;
	// 			this->currentLine = line;
	// 			this->currentLineContent = tmp;
	// 			break;
	// 		}
	// 		line++;
	// 	}
	// 	if (eof)
	// 	{
	// 		this->currentLineContent = "";
	// 	}
	// 	file.close();
	// }
	return this->currentLineContent;
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

// PRIVATE METHODS
//////////////////////////////////////////////////////////

void FileStreamImpl::resetAttributes()
{
	this->currentLine = 0;
	this->currentLineContent = "";
	this->filePath = "";
}

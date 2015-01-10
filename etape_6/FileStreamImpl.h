#ifndef FILE_STREAM_IMPL_H
	#define  FILE_STREAM_IMPL_H

	#include <fstream>
	#include "FluxStream.h"

	class        			FileStreamImpl
	{
		// ATTRIBUTES
		private:
			std::string 	currentLine;
			std::fstream	file;

		// CONSTRUCTOR / DESTRUCTOR
		public:
			FileStreamImpl();
			~FileStreamImpl();

		// PUBLIC METHODS
		public:
			bool            close();
			bool            open(std::string&);
			std::string&    read();
			int             write(std::string&);
	};
#endif

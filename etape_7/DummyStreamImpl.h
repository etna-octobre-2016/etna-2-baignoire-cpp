#ifndef DUMMY_STREAM_IMPL_H
    #define  DUMMY_STREAM_IMPL_H

    #include <fstream>
    #include "FluxStream.h"

    class                   DummyStreamImpl : public FluxStream
    {
        // ATTRIBUTES
        private:
            std::string     currentLineContent;
            std::ifstream   fileInput;
            std::ofstream   fileOutput;

        // CONSTRUCTOR / DESTRUCTOR
        public:
            DummyStreamImpl();
            ~DummyStreamImpl();

        // PUBLIC METHODS
        public:
            bool            close();
            bool            open(std::string&);
            std::string&    read();
            int             write(std::string&);
    };
#endif

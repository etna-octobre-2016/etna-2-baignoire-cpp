#ifndef DUMMY_STREAM_IMPL_H
    #define  DUMMY_STREAM_IMPL_H

    #include "FluxStream.h"

    class                   DummyStreamImpl : public FluxStream
    {
        // ATTRIBUTES
        private:
            std::string     currentLineContent;

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

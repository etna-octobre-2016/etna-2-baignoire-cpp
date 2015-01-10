#ifndef FLUX_STREAM_H
    #define  FLUX_STREAM_H

    #include <iostream>
    #include <string>

    using namespace std;

    class                   FluxStream
    {
        public:
            virtual         ~FluxStream(){}
            virtual bool    open(string& filepath) = 0;
            virtual string& read() = 0;
            virtual int     write(string& line) = 0;
            virtual bool    close() = 0;
    };
#endif

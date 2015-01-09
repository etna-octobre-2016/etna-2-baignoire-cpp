#ifndef FLUX_STREAM_H
    #define  FLUX_STREAM_H
    #include <string>

    class FluxStream
    {
        public:
            virtual bool            close() = 0;
            virtual bool            open(std::string&) = 0;
            virtual std::string&    read() = 0;
            virtual int             write(std::string&) = 0;
    };
#endif

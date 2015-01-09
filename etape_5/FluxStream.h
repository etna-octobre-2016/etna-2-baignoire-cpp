#ifndef FLUX_STREAM_H
    #define  FLUX_STREAM_H
    #include <string>

    class FluxStream
    {
        public:
            bool            close();
            bool            open(std::string&);
            std::string&    read();
            int             write(std::string&);
    };
#endif

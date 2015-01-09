#ifndef FLUX_STREAM_H
    #define  FLUX_STREAM_H
    #include <string>

    class                           FluxStream
    {
        public:
            virtual bool            open(std::string& filepath);
            virtual std::string&    read();
            virtual int             write(std::string& line);
            virtual bool            close();
    };
#endif

class FluxStream
{
    virtual bool    close();
    virtual bool    open(string&);
    virtual string& read();
    virtual int     write(string&);
}

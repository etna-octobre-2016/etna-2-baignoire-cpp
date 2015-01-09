#ifndef CLASS_TEST_H
    #define         CLASS_TEST_H

    #include        <string>

    class           ClassTest
    {
        public:
            std::string test();
            std::string test(std::string);
            std::string test(std::string, bool);
            int         getUnAttribut();
            void        setUnAttribut(int);

        private:
            int         unAttribut;
    };
#endif

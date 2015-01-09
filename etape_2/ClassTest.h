#ifndef CLASS_TEST_H
    #define         CLASS_TEST_H

    #include        <string>

    class           ClassTest
    {
        public:
            std::string test();
            int         getUnAttribut();
            void        setUnAttribut(int value);

        private:
            int         unAttribut;
    };
#endif

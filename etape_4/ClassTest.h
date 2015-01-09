#ifndef CLASS_TEST_H
    #define  CLASS_TEST_H
    #include <string>

    class                       ClassTest
    {
        // ATTRIBUTES
        private:
            static bool         alreadyInstanciated;
            static ClassTest*   instance;
            int                 unAttribut;

        // PUBLIC METHODS
        public:
            static void         destroy();
            static ClassTest*   getInstance();
            int                 getUnAttribut();
            void                setUnAttribut(int);
            std::string         test();
            std::string         test(std::string);
            std::string         test(std::string, bool);

        // PRIVATE METHODS
        private:
            ClassTest();
            ~ClassTest();
    };
#endif

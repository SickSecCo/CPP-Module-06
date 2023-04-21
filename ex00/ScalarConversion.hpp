#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Conversion {

    private:
        std::string str;
        std::string nul;
        int i;
        float f;
        double d;
        int floating_point;

    public:
        Conversion(std::string arg);
        ~Conversion(void);
    
    class InvalidInput : public std::exception{
        public:
            const char *what() const throw(){
                return ("Invalid input");
            }
    };
};

#endif
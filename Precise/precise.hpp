#ifndef PRECISE_HPP_INCLUDED
#define PRECISE_HPP_INCLUDED

#include <string>
#include <vector>

namespace precise {
    class precise {
    private:
        std::vector<int> value_int, value_dec;
        int precision = 10; //the amount of decimals that will be used in calculations

        void parse_string(std::string value);

    public:
        precise(double value); // constructor for double
        precise(float value); //constructor for float
        precise(int value); //constructor for integer,
        precise(std::string value); //constructor for string

        double get_number_as_double(); //returns the whole number as double
        double get_decimal_as_double(): //returns the decimal portion as double
        double get_int_as_double(); //returns the integer portion as double

        float get_number_as_float(); //returns the whole number as float
        float get_decimal_as_float(); //returns the decimal portion as float
        float get_int_as_float(); //returns the integer portion as float

        int get_int_as_int(); //returns the integer portion as int, will not have decimal form as that doesn't seem useful'

        std::string get_number_as_string(); // returns the whole number as string
        std::string get_decimal_as_string(); //returns the decimal portion as string, 0.* or .*?
        std::string get_int_as_string(); //returns the integer portion as string, *. or *?

        void set_precision(int length); //set the precision for decimals
    };
}

#endif // PRECISE_HPP_INCLUDED

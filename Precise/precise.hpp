#ifndef PRECISE_HPP_INCLUDED
#define PRECISE_HPP_INCLUDED

#include <string>

namespace precise {
    class precise {
    private:
        int* value_int;
        int* value_dec;
    public:
        precise(double value_other);
        precise(float value_other);
        precise(int value_int_other, int value_dec_other);
        precise(std::string value_other);
    };
}

#endif // PRECISE_HPP_INCLUDED

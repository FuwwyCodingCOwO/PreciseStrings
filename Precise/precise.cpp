#include "precise.hpp"

namespace precise{
    precise::precise(double value_other){
        std::string temp(std::to_string(value_other));
    }
    precise::precise(float value_other){
        std::string temp(std::to_string(value_other));
    }
    precise::precise(int value_int_other, int value_dec_other){
        std::string temp_int(std::to_string(value_int_other));
        std::string temp_dec(std::to_string(value_dec_other));
    }
    precise::precise(std::string value_other){

    }
}

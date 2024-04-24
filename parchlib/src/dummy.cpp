#include <parch/dummy.hpp>

namespace parch
{

    dummy_class::dummy_class()
    {
        std::cout << "Konstruktor" << std::endl;
    }

    void dummy_class::say_hello()
    {
        std::cout << "Hello world" << std::endl;
    }
}
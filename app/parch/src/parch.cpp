#include <parch/dummy.hpp>

int main( int argc, const char * argv[] )
{
    std::cout << "Start" << std::endl;
    parch::dummy_class dummy;
    dummy.say_hello();
}
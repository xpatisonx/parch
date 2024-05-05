#ifndef PARCH_DUMMY_HPP
#define PARCH_DUMMY_HPP

#include <iostream>
#include <fstream>
#include <vector>

namespace parch
{
    class file
    {
    public:
        file() = default;
        file(std::string name);

    private:
        std::string name;
        std::streampos file_size;
        std::vector<unsigned char> bytes;

        bool load();

    };
}

#endif
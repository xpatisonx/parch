#include <parch/file.hpp>

namespace parch
{
    file::file(std::string _name) : name { _name }
    {
        if (load())
        {
            std::cout << "File " << name << " load successfully." << std::endl;
        }
    }

    bool file::load()
    {
        std::ifstream file(name, std::ios::binary);

        if (!file) {
            std::cerr << "File cannot be opened." << std::endl;
            return false;
        }

        file.seekg(0, std::ios::end);
        file_size = file.tellg();
        file.seekg(0, std::ios::beg);

        bytes.resize(file_size);
        file.read(reinterpret_cast<char*>(bytes.data()), file_size);

        file.close();
        return true;
    }
}
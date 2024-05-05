#include <parch/file.hpp>
#include <cxxopts.hpp>

int main( int argc, const char * argv[] )
{
    std::cout << "Start" << std::endl;

    cxxopts::Options options("Parch", "An application for compressing files using a proprietary algorithm.");

    std::vector<std::string> input_files;
    std::string output_file;
    std::vector<parch::file> files;

    options.add_options()
        ("i,input", "Nazwa pliku wejściowego", cxxopts::value<std::vector<std::string>>(input_files))
        ("o,output", "Nazwa pliku wyjściowego", cxxopts::value<std::string>(output_file));
    
    auto result = options.parse(argc, argv);

    if (result.count("input")) {
        std::cout << "Przekazano następujące pliki wejściowe:" << std::endl;
        for (const auto& input_file : input_files) {
            std::cout << "- " << input_file << std::endl;
            files.emplace_back(input_file);
        }
    } else {
        std::cout << "Nie podano żadnych plików wejściowych." << std::endl;
    }

    if (result.count("output")) {
        std::cout << "Przekazano nazwę pliku wyjściowego: " << output_file << std::endl;
    } else {
        std::cout << "Nie podano nazwy pliku wyjściowego." << std::endl;
    }


}
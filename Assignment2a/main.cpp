#include <iostream>
#include <fstream>
#include <filesystem>


int main()
{    
    std::ifstream infile;
    infile.open("readerdata.txt",std::ios::binary|std::ios::in);
    
    uintmax_t file_size {};
    std::filesystem::file_size("readerdata.txt");
    std::cout << file_size << '\n';
    infile.close();

}

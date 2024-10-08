#include <iostream>
#include <fstream>
#include <filesystem>


int main()
{    
    std::ifstream infile;
    infile.open("readerdata.txt",std::ios::binary|std::ios::in);
    
    uintmax_t file_size {std::filesystem::file_size("readerdata.txt")-1};
    std::cout << file_size << '\n';
    char *buffer {new char[file_size]};
    infile.read((char *)buffer,file_size);
    std::cout << buffer << '\n';
    
    infile.close();
    

}

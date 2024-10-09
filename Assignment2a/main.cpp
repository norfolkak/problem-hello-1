//Klopov Aleksei - Assignment 2b - st130153@student.spbu.ru


#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{    
    std::ifstream infile;
    infile.open("readerdata.txt",std::ios::binary|std::ios::in);
    std::ofstream outfile;
    outfile.open("reverseddata.txt",std::ios::binary|std::ios::out);
    
    uintmax_t file_size {std::filesystem::file_size("readerdata.txt")-1};
    char *buffer {new char[file_size]};
    infile.read((char *)buffer,file_size);
    
    char temporary{};
    for (int i=0; i<file_size/2; i++)
    {
    temporary=buffer[i];
    buffer[i]=buffer[file_size-1-i];
    buffer[file_size-1-i]=temporary;
    }
    outfile.write((char *)buffer,file_size);
    delete[] buffer;
    
    infile.close();
    outfile.close();
}

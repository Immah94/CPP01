#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::ifstream input_file;
    std::ofstream output_file;
    std::string str1;
    std::string str2;
    std::string replace_l;
    std::string file;
    int i;

    if(ac < 4)
    {
        std::cout << "Not enough arguments" << std::endl;
        return 1;
    }
    str1 = av[2];
    str2 = av[3];

    input_file.open(av[1]);
    if(!input_file.is_open())
    {
        std::cout << "Error, file can't be opened" << std::endl;
        return 1;
    }

    replace_l = av[1];
    replace_l += ".replace";
    output_file.open(replace_l.c_str());
    if(!output_file.is_open())
    {
        std::cout << "Error, file can't be opened" << std::endl;
        input_file.close();
        return 1;
    }
    std::getline(input_file, file, '\0');
    while((i = file.find(str1)) != -1)
    {
        file.erase(i, str1.length());
        file.insert(i, str2);
    }
    output_file << file;

    input_file.close();
    output_file.close();
    return 0;
}
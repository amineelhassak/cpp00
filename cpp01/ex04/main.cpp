#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        size_t pos;
        std::string str;
        std::string line;
        std::string s;
        std::string concat;
        std::string str1 = argv[2];
        int len;

        len = str1.length();
        std::ifstream File(argv[1]);
        concat = argv[1];
        s = ".replace";
        concat = argv[1] + s;
        std::ofstream newFile(concat);
        if (!File)
        {
            return (std::cerr << "Error opening input file" << std::endl, 1);
        }
        if (!newFile)
        {
            File.close();
            std::cerr << "Error opening output file" << std::endl;
            return 1;
        }
        while (std::getline(File, line))
        {
            str += line;
            if (!File.eof())
                str += '\n';
        }
        while ((pos = str.find(argv[2])) != std::string::npos)
        {
            str.erase(pos, len);
            str.insert(pos, argv[3]);
        }
        std::cout << str << std::endl;
        newFile << str;

        File.close();
        newFile.close();
    }
    else
    {
        std::cerr << "Usage: " << argv[0] << " <input_file> <string1> <string2>" << std::endl;
        return 1;
    }
    return 0;
}
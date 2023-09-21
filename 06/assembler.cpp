#include <iostream>
#include <fstream>
#include <map>

std::map<std::string, int> dictionary;
void translate(std::ifstream& input, std::ofstream& output);
void handle_symbols(std::ifstream& input); 

int main()
{
    std::string input_filename;
    std::string output_filename;
    std::cout << "Pls type in your input filename";
    std::cin >> input_filename;
    std::cout << "Pls type in your output filename";
    std::cin >> output_filename;
    std::ifstream input(input_filename.c_str());
    std::ofstream output(output_filename.c_str());
    handle_symbols(input);
    translate(input, output);
    return 0;
}

void translate(std::ifstream& input, std::ofstream& output);

void handle_symbols(std::ifstream& input)
{
    std::string line;
    while(input >> line)
    {
        
    }
}


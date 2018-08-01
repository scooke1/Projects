//
// Uber, Inc (c) 2018
//
#include <iostream>
#include <string>

int main ()
{

std::string string_a;
std::string string_b;
std::string merged_string_size;
std::string merged_string;

std::cout << "Enter 1st String\n";
std::cin >> string_a;

std::cout << "Enter 2nd String\n";
std::cin >> string_b;

merged_string_size = string_a + string_b;

for (int i = 0; i < merged_string_size.size(); ++i)
    {
        merged_string.push_back(string_a[i]);
        merged_string.push_back(string_b[i]);
    }

    std::cout << merged_string;

return 0;

}
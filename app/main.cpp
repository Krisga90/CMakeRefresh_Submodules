#include <iostream>

#include "my_lib.hpp"
#include "config.hpp"

int main(int argc, char** argv)
{

    std::cout << project_name << "\n";
    std::cout << project_version << "\n";
    print_hello_world();

    return 0;
}
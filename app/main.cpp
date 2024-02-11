#include <iostream>

#include "my_lib.hpp"
#include "config.hpp"

#include <nlohmann/json.hpp>

int main(int argc, char** argv)
{

    std::cout << project_name << "\n";
    std::cout << project_version << "\n";
    // print_hello_world();

    std::cout << "LIb version nlohmann: "
        << NLOHMANN_JSON_VERSION_MAJOR << "."
        << NLOHMANN_JSON_VERSION_MINOR << "."
        << NLOHMANN_JSON_VERSION_PATCH << "\n";

    cos();

    return 0;
}
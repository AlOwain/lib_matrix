#include "row.h"
#include <iostream>

int main(int argc, char **argv)
{
    row r = { 5 };
    
    int *vals;
    r.unsafe_get_values(vals);

    for (int i = 0; i < r.get_size(); i++)
        std::cout << vals[i] << std::endl;

    delete[] vals;
    return 0;
}

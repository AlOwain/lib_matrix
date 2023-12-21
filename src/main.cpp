#include "matrix.h"

int main(int argc, char **argv)
{
    matrix x({{1, 2}, {3, 4}});
    matrix y({{5, 6}, {7, 8}});
    x.print();
    std::cout << "-----\n";
    y.print();
    std::cout << "-----\n";
    y = x + y;
    y.print();
    return 0;
}

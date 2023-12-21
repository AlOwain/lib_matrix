#include <iostream>
#include <vector>

class matrix {
public:
    matrix(int size);
    matrix(int rows, int columns);
    matrix(std::vector<std::vector<int>> values);

    matrix operator+(matrix x);
    matrix operator-(matrix x);
    void operator=(matrix x);

    void print();
private:
    std::vector<std::vector<int>> grid;
};

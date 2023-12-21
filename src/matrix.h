#include <iostream>
#include <vector>

class matrix {
public:
    matrix(std::vector<std::vector<int>> values);

    matrix operator+(matrix x);
    matrix operator-(matrix x);
    void operator=(matrix x);
    void print();
private:
    std::vector<std::vector<int>> grid;
};

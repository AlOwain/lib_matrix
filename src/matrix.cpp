#include "matrix.h"

matrix::matrix(int size) : matrix(size, size) {}
matrix::matrix(int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        grid.push_back(std::vector<int>());
        for (int j = 0; j < columns; j++)
            grid[i].push_back(0);
    }
}

matrix::matrix(std::vector<std::vector<int>> values)
{
    // FIXME: Check for proper format.
    grid = values;
}

matrix matrix::operator+(matrix x)
{
    std::vector<std::vector<int>> newValues = x.grid;
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].size(); j++)
            newValues[i][j] = newValues[i][j] + grid[i][j];
    return newValues;
}
matrix matrix::operator-(matrix x)
{
    std::vector<std::vector<int>> newValues = x.grid;
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].size(); j++)
            newValues[i][j] = newValues[i][j] - grid[i][j];
    return newValues;
}
void matrix::operator=(matrix x)
{
    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].size(); j++)
            this->grid[i][j] = x.grid[i][j];
}

void matrix::print()
{
    for (int i = 0; i < grid.size(); i++)
    {
        std::cout << "[ ";
        for (int j = 0; j < grid[i].size(); j++)
            std::cout << grid[i][j] << " ";
        std::cout << "]\n";
    }
}

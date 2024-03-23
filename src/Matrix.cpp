#include"Matrix.hpp"
#include<vector>
#include<iostream>

Matrix::Matrix(std::vector< std::vector<double> > values) : _values(values){}

std::vector< std::vector<double> >::const_iterator Matrix::begin() const
{
    return _values.begin();
}

std::vector< std::vector<double> >::const_iterator Matrix::end() const
{
    return _values.end();
}

void Matrix::print() const
{
    for(auto row : _values)
    {
        for(auto element: row)
        {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}

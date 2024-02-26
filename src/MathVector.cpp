#include "MathVector.hpp"
#include <vector>
#include <iostream>

MathVector::MathVector(std::vector<double> values) : _values(values) {}

int MathVector::size() const
{
    return _values.size();
}

double MathVector::operator[](unsigned index) const
{
    return _values[index];
}

double& MathVector::operator[](unsigned index)
{
    return _values[index];
}

void MathVector::print() const
{
    for(double element: _values)
    {
        std::cout << element << " ";
    }
}

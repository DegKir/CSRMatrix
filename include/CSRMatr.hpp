#pragma once

#include <vector>

#include "MathVector.hpp"
#include "Matrix.hpp"


class CSRMatr
{
    std::vector<double> _values;
    std::vector<int>  _colIndex;
    std::vector<int>  _rowIndex;

public:
    CSRMatr() = default;
    CSRMatr(const Matrix&);
    
    void print() const;
    MathVector operator*(const MathVector&) const;
};

#pragma once

#include <vector>

#include "MathVector.hpp"
#include "Matrix.hpp"


class CSRMatr
{
    std::vector<double> _values;
    std::vector<unsigned>  _colIndex;
    std::vector<unsigned>  _rowIndex;

public:
    CSRMatr() = default;
    CSRMatr(const Matrix&);

    void print() const;
    MathVector operator*(const MathVector&);
    std::vector<double> getA() const;
    std::vector<unsigned> getIA() const;
    std::vector<unsigned> getJA() const;
};

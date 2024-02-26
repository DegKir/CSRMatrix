#include"CSRMatr.hpp"
#include"Matrix.hpp"
#include"MathVector.hpp"

#include<iostream>
#include<algorithm>
#include<iostream>
#include<utility>

CSRMatr::CSRMatr(const Matrix& matrix)
{
    int rowCounter = 0;
    std::for_each(matrix.begin(), matrix.end(), [this, &rowCounter ](auto row)
    {
        _rowIndex.push_back(rowCounter);
        for(int i = 0; i < row.size(); i++)
        {
            if(row[i] != 0)
            {
                _values.push_back(row[i]);
                _colIndex.push_back(i);
                rowCounter++;
            }

        }
    }
    );
    _rowIndex.push_back(_values.size());
}

void CSRMatr::print() const
{
    std::cout << "Non-zero values : ";
    for (auto element : _values)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "Column indexes : " ;
    for (auto element : _colIndex)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "Row indexes : ";
    for (auto element : _rowIndex)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

MathVector CSRMatr::operator*(const MathVector& mathVector) const
{
    MathVector result(std::vector<double> (mathVector.size()) );

    for(int row = 0; row < mathVector.size(); row++)
    {
        for(int j = _rowIndex[row]; j < _rowIndex[row+1]; j++)
        {
            int index = _colIndex[j];
            result[ index ] = result[ index ] + _values[ index ]*mathVector[ index ];
        }
    }

    return result;
}

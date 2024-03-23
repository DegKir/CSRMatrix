#pragma once
#include<vector>

class Matrix
{
private:
    std::vector< std::vector<double> > _values;
public:
    std::vector< std::vector<double> >::const_iterator begin() const;
    std::vector< std::vector<double> >::const_iterator end() const;
    Matrix (std::vector< std::vector<double> >);
    void print() const;
};

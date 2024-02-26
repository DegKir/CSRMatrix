#pragma once
#include<vector>

class MathVector
{
private:
    std::vector<double> _values;
public:
    MathVector(std::vector<double>);
    int size() const;
    void print() const;
    double operator[](unsigned) const;
    double& operator[](unsigned);
};

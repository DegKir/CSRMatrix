#include<iostream>
#include"MathVector.hpp"
#include"Matrix.hpp"
#include"CSRMatr.hpp"

void firstCSRTest();
void secondCSRTest();
void thirdCSRTest();

void firstCSRMultTest();
void secondCSRMultTest();
void thirdCSRMultTest();

int main()
{
    firstCSRTest();
    std::cout << " _____________________________" << std::endl;
    secondCSRTest();
    std::cout << " _____________________________" << std::endl;
    thirdCSRTest();
    std::cout << " _____________________________" << std::endl;
    firstCSRMultTest();
    std::cout << " _____________________________" << std::endl;
    secondCSRMultTest();
    std::cout << " _____________________________" << std::endl;
    thirdCSRMultTest();
    std::cout << " _____________________________" << std::endl;
    return 0;
}

void firstCSRMultTest()
{
    std::cout << "CSR MATRIX MULTIPLICATION TEST #1" << std::endl;
    Matrix matrix({
                {1, 0, 0},
                {0, 1, 0},
                {0, 0, 1}
    });
    std::cout << "Matrix :" << std::endl;
    matrix.print();
    std::cout << "CSR Matrix :" << std::endl;
    CSRMatr example(matrix);
    example.print();
    MathVector mathVector({1, 1, 1});
    std::cout << "Vector :" << std::endl;
    mathVector.print();
    std::cout << std::endl;
    MathVector result = example*mathVector;
    std::cout << "Result :" << std::endl;
    result.print();
}

void secondCSRMultTest()
{
    std::cout << "CSR MATRIX MULTIPLICATION TEST #2" << std::endl;
    Matrix matrix({
                {0, 0, 0},
                {0, 1, 0},
                {0, 0, 1}
    });
    std::cout << "Matrix :" << std::endl;
    matrix.print();
    std::cout << "CSR Matrix :" << std::endl;
    CSRMatr example(matrix);
    example.print();
    MathVector mathVector({1, 1, 1});
    std::cout << "Vector :" << std::endl;

    mathVector.print();
    std::cout << std::endl;
    MathVector result = example*mathVector;
    std::cout << "Result :" << std::endl;
    result.print();
}

void thirdCSRMultTest()
{
    std::cout << "CSR MATRIX MULTIPLICATION TEST #3" << std::endl;
    Matrix matrix({
                {0, 0, 0},
                {0, 1, 0},
                {0, 0, 1}
    });
    std::cout << "Matrix :" << std::endl;
    matrix.print();
    std::cout << "CSR Matrix :" << std::endl;
    CSRMatr example(matrix);
    example.print();
    MathVector mathVector({1, 0, 0});
    std::cout << "Vector :" << std::endl;

    mathVector.print();
    std::cout << std::endl;
    MathVector result = example*mathVector;
    std::cout << "Result :" << std::endl;
    result.print();
}

void firstCSRTest()
{
    std::cout << "CSR MATRIX TEST #1" << std::endl;
    Matrix matrix({
                {5, 0, 0, 0},
                {0, 8, 0, 0},
                {0, 0, 3, 0},
                {0, 6, 0, 0}
                });

    std::cout << " Matrix :" << std::endl;
    matrix.print();
    std::cout << "in CSR format :" << std::endl;
    CSRMatr example(matrix);
    example.print();
    std::cout << "RIGHT ANSWER IS " << std::endl;
    std::cout << "Non-zero values : 5 8 3 6 " << std::endl;
    std::cout << "Column indexes : 0 1 2 1 " << std::endl;
    std::cout << "Row indexes : 0 1 2 3 4" << std::endl;
}

void secondCSRTest()
{
    std::cout << "CSR MATRIX TEST #2" << std::endl;
    Matrix matrix({
                {10, 20,  0,  0,  0,  0},
                { 0, 30,  0, 40,  0,  0},
                { 0,  0, 50, 60, 70,  0},
                { 0,  0,  0,  0,  0, 80}
                });
    std::cout << " Matrix :" << std::endl;
    matrix.print();
    std::cout << "in CSR format :" << std::endl;
    CSRMatr example(matrix);
    example.print();
    std::cout << "RIGHT ANSWER IS " << std::endl;
    std::cout << "Non-zero values : 10 20 30 40 50 60 70 80 " << std::endl;
    std::cout << "Column indexes : 0 1 1 3 2 3 4 5 " << std::endl;
    std::cout << "Row indexes : 0 2 4 7 8" << std::endl;
}

void thirdCSRTest()
{
    std::cout << "CSR MATRIX TEST #3" << std::endl;
    Matrix matrix({
                {0, 0, 1},
                {0, 0, 0},
                {3, 1, 4},
                });
    std::cout << " Matrix :" << std::endl;
    matrix.print();
    std::cout << "in CSR format :" << std::endl;
    CSRMatr example(matrix);
    example.print();
    std::cout << "RIGHT ANSWER IS " << std::endl;
    std::cout << "Non-zero values : 1 3 1 4 " << std::endl;
    std::cout << "Column indexes : 2 0 1 2 " << std::endl;
    std::cout << "Row indexes : 0 1 1 4" << std::endl;
}

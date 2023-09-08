#include <iostream>


#include "Matrix.h"

int main()
{
    size_t rows, columns;
    std::cout << "Enter amount of matrix rows:\n";
    std::cin >> rows;
    std::cout << "Enter amount of matrix columns:\n";
    std::cin >> columns;
    std::cout << "Enter " << rows * columns << " elements to fill the matrix:\n";
    
    Matrix mat1( rows, columns, std::cin );
    std::cout << "Entered matrix:\n" << mat1 << "\n";

    std::cout << "Enter second matrix.\n";
    std::cout << "Enter amount of matrix rows:\n";
    std::cin >> rows;
    std::cout << "Enter amount of matrix columns:\n";
    std::cin >> columns;
    std::cout << "Enter " << rows * columns << " elements to fill the matrix:\n";

    Matrix mat2( rows, columns, std::cin );
    std::cout << "Entered matrix:\n" << mat2 << "\n";

    std::cout << "Sum of matrices:\n" << mat1 + mat2 << "\n";
    std::cout << "Difference of matrices:\n" << mat1 - mat2 << "\n";

    std::cout << "Product of matrices:\n" << mat1 * mat2 << "\n";
    
}

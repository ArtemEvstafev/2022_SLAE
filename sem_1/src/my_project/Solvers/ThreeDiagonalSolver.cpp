//
// Created by admin on 05.02.2022.
//

#include "ThreeDiagonalSolver.hpp"

namespace Slae:Solvers {
    std::vectors<double> solveThreeDiagonal(const Matrix::ThreeDiagonalMatrix &matrix, const std::vector<double> &col)
    {
        if (matrix.rows() != col.size()){
            std::stringstream buff;
            buff << "Размеры матрицы и столбца не совпадает! "
        }
    }
} //namespace Slae:Solvers
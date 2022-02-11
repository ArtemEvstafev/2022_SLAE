//
// Created by admin on 05.02.2022.
//

#ifndef SLAEBASEEXCEPTION_CPP_THREEDIAGONALSOLVER_HPP
#define SLAEBASEEXCEPTION_CPP_THREEDIAGONALSOLVER_HPP

namespace Slae::Solvers{
    std::vectors<double> solveThreeDiagonal(const Matrix::ThreeDiagonalMatrix &matrix, const std::vector<double> &col);
} // namespace Slae::Solvers

#endif //SLAEBASEEXCEPTION_CPP_THREEDIAGONALSOLVER_HPP

//
// Created by admin on 05.02.2022.
//

#ifndef SLAEBASEEXCEPTION_CPP_THREEDIAGONALSOLVER_HPP
#define SLAEBASEEXCEPTION_CPP_THREEDIAGONALSOLVER_HPP

#include "../sparse/CSR.hpp"
#include "../utility/Norm.hpp"
#include "../utility/overloads.hpp"

#include <string>
#include <sstream>
#include "my_project/SlaeBaseException.hpp"
#include "my_project/matrix/ThreeDiagonalMatrix.hpp"

namespace Slae::Solvers{
    /** @brief Метод решает СЛАУ при помощи метода прогонки
    * Данный метод решает систему линейный алгебраических уравнений с правой частью при помощи метода прогонки. О
    * методе прогонки можно узнать из книги Демченко "Упражнения и задачи контрольных работы по вычислительной математике. Часть 1"
    *
    * @param matrix трёхдиагональная матрица
    * @param col вектор-столбец правой части СЛАУ
    * @return решение СЛАУ
    *
    *
    * @throw SlaeBaseExceptionCpp выбрасывается, если строк матрицы и высота столбца не совпадают
   */
    [[nodiscard]] std::vector<double> solveThreeDiagonal(const Slae::Matrix::ThreeDiagonalMatrix& matrix, const std::vector<double>& col);
}


#endif //MY_PROJECT_THREEDIAGONALSOLVER_H

//
// Created by admin on 05.02.2022.
//

#include "ThreeDiagonalMatrix.hpp"

namespace Slae::Matrix {
    ThreeDiagonalMatrix::ThreeDiagonalMatrix(int size): data_(size){}

    ThreeDiagonalMatrix ThreeDiagonalMatrix::Zero(int size) {
        ThreeDiagonalMatrix result(size);
        for (auto &string: result.data_) {
            string = {0., 0., 0.};
        }
        return result;
    }

    double &ThreeDiagonalMatrix::operator()(int i, int j) {
#ifndef NDEBUG
        if (i >= data_.size()) {
            std::stringstream buff;
            buff << "Индекс i превышает размер матрицы! Полученный индекс: "<< i << ". Размер матрицы: "
                <<data_.size() << ". Файл: " << __FILE__ << ". Строка: " << __LINE__;
            throw SlaeBaseExceptionCpp(buff.str());
        }
#endif
    return data_[i][j];
    }
    const double &ThreeDiagonalMatrix::operator()(int i, int j) const{
        if (i >= data_.size()) {
            std::stringstream buff;
            buff << "Индекс i превышает размер матрицы! Полученный индекс: "<< i << ". Размер матрицы: "
            <<data_.size() << ". Файл: " << __FILE__ << ". Строка: " << __LINE__;
            throw SlaeBaseExceptionCpp(buff.str());
        }
        return data_[i][j];
    }


}   // namespace Slae::Matrix

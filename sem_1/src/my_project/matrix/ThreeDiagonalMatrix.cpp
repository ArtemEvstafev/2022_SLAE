//
// Created by admin on 05.02.2022.
//

#include "ThreeDiagonalMatrix.hpp"
#include <iostream>

namespace Slae::Matrix {
    ThreeDiagonalMatrix::ThreeDiagonalMatrix(int size) : data_(size) {}

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
            buff << "Индекс i превышает размер матрицы! Полученный индекс: " << i << ". Размер матрицы: "
                 << data_.size() << ". Файл: " << __FILE__ << ". Строка: " << __LINE__;
            throw SlaeBaseExceptionCpp(buff.str());
        }
        if (j > 2) {
            std::stringstream buf;
            buf << "Index i must be in {0, 1, 2}! Input index" << j << "Файл: " << __FILE__ << ". Строка: " << __LINE__;
            throw SlaeBaseExceptionCpp(buf.str());
        }
#endif
        return data_[i][j];
    }

    const double &ThreeDiagonalMatrix::operator()(int i, int j) const {
#ifndef NDEBUG
        if (i >= static_cast<int>(data_.size())) {
            std::stringstream buf;
            buf << "Индекс i превышает размер матрицы! Полученный индекс: " << i << ". Размер матрицы: "
                << static_cast<int>(data_.size()) << "Файл: " << __FILE__ << ". Строка: " << __LINE__;
            throw SlaeBaseExceptionCpp(buf.str());
        }
        if (j > 2) {
            std::stringstream buf;
            buf << "Index i must be in {0, 1, 2}! Input index" << j << "Файл: " << __FILE__ << ". Строка: " << __LINE__;
            throw SlaeBaseExceptionCpp(buf.str());
        }
#endif //NDEBUG
        return data_[i][j];
    }
    int Slae::Matrix::ThreeDiagonalMatrix::rows() const noexcept {
        return static_cast<int>(data_.size());
    }


}   // namespace Slae::matrix

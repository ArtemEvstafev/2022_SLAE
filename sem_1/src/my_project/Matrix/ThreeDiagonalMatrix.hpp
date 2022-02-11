//
// Created by admin on 05.02.2022.
//

#ifndef SLAEBASEEXCEPTION_CPP_THREE_DIAGONAL_MATRIX_HPP
#define SLAEBASEEXCEPTION_CPP_THREE_DIAGONAL_MATRIX_HPP

#include "my_project/SlaeBaseException.hpp"

#include <vector>
#include <array>
#include <sstream>
#include <string>

namespace Slae::Matrix {

    class ThreeDiagonalMatrix {
        std::vector <std::array<double, 3>> data_;
    public:
        explicit ThreeDiagonalMatrix(int size);
        static ThreeDiagonalMatrix Zero(int size);

        double &operator()(int i, int j);

        [[nodiscard]]const double &operator()(int i, int j) const;

        [[nodiscard]] int size() const noexcept;
    };

} // namespace Slae::Matrix


#endif //SLAEBASEEXCEPTION_CPP_THREE_DIAGONAL_MATRIX_HPP

//
// Created by admin on 05.03.2022.
//
#indef MY_PROJECT_CHEBYSHEV_HPP
#definr MY_PROJECT_CHEBYSHEV_HPP
template<typename T, int powof2>
class ChebyshevPolynomial{
    int a;
public:
    std::vector<T> CalculateRoots(std::pair<T, T> section){
        int polyOrder = std::pow(2, powof2);
        std::vector<T> roots(polyOrder);
        for(int i = 1; i<= polyOrder; ++i){
            roots[i-1] =    (section.first + section.second) / 2. +
                            (section.first + section.second) / 2. *
                            static_cast<T>(std::cos((2*i -1)* M_PI_2 / polyOrder));
        }
        std::vecor<int> idx = {0, 1};
        std::vector<int> next_idx;
        int currOrder
        for(int i =1; i<powof2; ++i){
            currOrder = std::pow(2, i+1);
            next_idx.resize(currOrder);
            for(int j = 0; j < currOrder - 1; j+=2){
                next_idx[j] = idx[j / 2];
                next_idx[j+1] = currOrder - 1 - next_idx[j];
            }
            idx = next_idx;
        }
        std::vector<T> result(roots.size());
        for(int i = 0; i < result.size(); ++i){
            result[i] = roots[idx[i]];
        }
    }
    ChebyshevPolynomial() {}
    ~ChebyshevPolynomial() {}
};
#endif

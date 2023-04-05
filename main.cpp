#include <iostream>
#include "vector"
#include "algorithm"
#include "fmt/ranges.h"

int main(){
    auto comparatorLastDigit = [](int first, int second) {
        return first < second;
    };

    auto projection = [](int number) {
        return number%10;
    };

    std::vector<int> vector = {22, 14, 41, 67, 98};

    std::ranges::sort(vector, comparatorLastDigit, projection);
    fmt::print("{}", vector);

}

#include "make_random_vector.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector< int > v     = make_random_vector(20, 0, 10);
    auto               print = [](const int& n) { std::cout << " " << n; };
    std::for_each(v.cbegin(), v.cend(), print);
    std::cout << "\n";
    /*std::sort(v.begin(), v.end());
    std::for_each(v.cbegin(), v.cend(), print);*/
    int a = std::count(v.cbegin(), v.cend(), 7);
    std::cout << a;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};

    vec.erase(std::remove(vec.begin(), vec.end(), 2), vec.end());
    for(std::vector<int>::iterator it = vec.begin() ; it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::for_each(vec.begin(), vec.end(), [](int &n){ n*=2; });
    std::for_each(vec.begin(), vec.end(), [](int &n){ std::cout << n << " "; });
    std::cout << std::endl;

    int avg { std::accumulate(vec.begin(), vec.end(), 0) / vec.size() };
    std::sort(vec.begin(), vec.end(), [avg](int a, int b){ return std::abs(avg-a)<std::abs(avg-b); });
    std::for_each(vec.begin(), vec.end(), [](int &n){ std::cout << n << " "; });
    std::cout << std::endl;

    std::sort(vec.begin(), vec.end());
    vec.erase( std::unique( vec.begin(), vec.end() ), vec.end() );
    std::for_each(vec.begin(), vec.end(), [](int &n){ std::cout << n << " "; });
    std::cout << std::endl;

    std::set<int> s (vec.begin(), vec.end());
    vec.erase(std::remove_if(vec.begin(), vec.end(), [](int& n){ return n>3; }), vec.end());
    std::for_each(vec.begin(), vec.end(), [](int &n){ std::cout << n << " "; });
    return 0;
}

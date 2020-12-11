#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    std::for_each(people.rbegin(), people.rend(), birthday)
        // std::for_each(Human p : people) { p.birthday; }
        // Twoja implementacja tutaj

        return ret_v;
}

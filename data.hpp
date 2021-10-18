#include <algorithm>
#include <iostream>
#include <limits>
#include <set>
#include <vector>

typedef size_t                          T_town;
typedef std::vector     < T_town    >   T_path_val;
typedef int                             T_dist;
typedef std::vector     < T_dist    >   T_row;
typedef std::vector     < T_row     >   T_matr;
typedef std::set        < T_town    >   T_towns;

int itowns(int towns_total);

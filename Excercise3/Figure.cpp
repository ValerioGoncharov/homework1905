#include "Figure.h"
#include <string>



std::string Figure::get_name() const {
    return name;
}

int Figure::get_sides_count() const {
    return sides_count;
}
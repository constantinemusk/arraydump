#include <array>
#include <stdexcept>

int main() {
    throw std::out_of_range("EXCEPTION: Out of range");

    return 0;
}
#include "rational.h"
#include <iostream>

int main() {
    Rational rational(1, 4);
    Rational result;
    result = rational * 2;
    result = 2 * rational;
    std::cout << result << std::endl;
    return 0;
}

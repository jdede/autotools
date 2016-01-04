#include <iostream>
#include <config.h>

int main (void) {
    std::cout << "Bug report mail address: " << PACKAGE_BUGREPORT << std::endl;
    return 0;
}

#include <iostream>
#include <config.h>
#include <libtest.h>

int main (void) {
    std::cout << "Bug report mail address: " << PACKAGE_BUGREPORT << std::endl;
    MyClass *test = new MyClass();
    test->DoSomething();
    return 0;
}

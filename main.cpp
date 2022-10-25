#include <iostream>
#include <cstdlib>

static char buffer[100 * 1024];

int main() {
    std::cout << "Hello UPX4!" << std::endl;

    srand(time(NULL));

    for (int i = 0; i < sizeof(buffer); ++i) {
        buffer[i] =  rand() % 128;
    }
    std::cout << "Done." << std::endl;
    return 0;
}
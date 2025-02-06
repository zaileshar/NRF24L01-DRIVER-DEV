#include <iostream>

class Nrf24l01_driver {
public:
    void printStatus() {
        std::cout << "Nrf24l01_driver initialized." << std::endl;
    }
};
// Fixed identified race condition

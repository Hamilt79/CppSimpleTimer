#include "Timer.h"
#include <iostream>
#include <thread>

int main(int argc, char* argv[]) {
    Timer timer(5000);
    timer.start();
    int del = atoi(argv[1]);
    while(timer.isDone() == false) {
        std::cout << "Timer is running..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(del));
    }
    std::cout << "Timer is done..." << std::endl;
    return 0;
}

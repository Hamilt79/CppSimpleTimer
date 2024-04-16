#include "Timer.h"

Timer::Timer() {
    this->duration = 0;
    this->isStarted = false;
}

Timer::Timer(long milli) {
    this->duration = milli;
    this->isStarted = false;
}

void Timer::start() {
    this->startTime = std::chrono::system_clock::now();
    this->isStarted = true;
}

bool Timer::isDone() {
    auto currentTime = std::chrono::system_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - this->startTime);
    return elapsed.count() >= this->duration && this->isStarted;
}

void Timer::reset() {
    this->isStarted = false;
}


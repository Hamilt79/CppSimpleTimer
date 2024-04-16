#include <chrono>

class Timer {
    public:
        Timer();
        Timer(long milli);
        void start();
        bool isDone();
        void reset();
    private:
        long duration;
        bool isStarted;
        std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long, std::ratio<1, 1000000000>>> startTime;
};

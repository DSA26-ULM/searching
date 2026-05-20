#include "searching_algorithms.h"
#include <chrono>



using Clock = std::chrono::high_resolution_clock;


void linear_search(const std::vector<int>& data, int target, Metrics& m) {
    auto start = Clock::now();

    // TODO: write the implementation here

    m.time_us = std::chrono::duration<double, std::micro>(Clock::now() - start).count();
}



void binary_search(const std::vector<int>& data, int target, Metrics& m) {
    auto start = Clock::now();

    // TODO: write the implementation here

    m.time_us = std::chrono::duration<double, std::micro>(Clock::now() - start).count();
}

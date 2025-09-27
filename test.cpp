#include <iostream>
#include <chrono>
#include <optional>

template <typename T>
class C;

int main() {
    std::optional<std::chrono::system_clock::time_point> opt;

    std::chrono::nanoseconds ns(12345678);
    auto now = std::chrono::system_clock::now();
    std::time_t tnow = std::chrono::system_clock::to_time_t(now);
    std::tm* date = std::localtime(&tnow);
    date->tm_hour = 0;
    date->tm_min = 0;
    date->tm_sec = 0;
    auto midnight = std::chrono::system_clock::from_time_t(std::mktime(date));    
    C<decltype(midnight)>();
    C<decltype(midnight + ns)>();
    //static_assert(std::is_same_v<
    //        std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>,
    //        std::chrono::system_clock::time_point
    //        >);

    opt.emplace(midnight + ns);
    /// Hahaha!
}

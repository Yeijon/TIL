#include <chrono>
#include <iostream>
#include <vector>

struct AlignedData {
    int x;  // 4 bytes
    int y;  // 4 bytes
};

struct UnalignedData {
    char c;  // 1 byte
    int x;   // 4 bytes
    char d;  // 1 byte
};

template<typename T>
void accessData(std::vector<T>& data, int iterations) {
    for (int i = 0; i < iterations; ++i) {
        for (auto& item : data) {
            item.x += 1;  // Simple operation to force memory access
        }
    }
}

auto g(int x) -> int { return x*x + 1;}
auto h(int x) -> decltype(x) { return x*x + 1; }
auto f(int x) { return x*x + 1; }

double measureTime(int x, int (*func)(int) ) {
    auto start = std::chrono::high_resolution_clock::now();
    func(x);
    auto end = std::chrono::high_resolution_clock::now();
    
    std::chrono::duration<double, std::milli> duration = end - start;
    return duration.count();
}

int main() {
    const int dataSize = 1000000;
    const int iterations = 100;

    std::vector<AlignedData> alignedVector(dataSize);
    std::vector<UnalignedData> unalignedVector(dataSize);

    // double alignedTime = measureTime(alignedVector, iterations);
    // double unalignedTime = measureTime(unalignedVector, iterations);

    // std::cout << "Time for aligned data: " << alignedTime << " ms\n";
    // std::cout << "Time for unaligned data: " << unalignedTime << " ms\n";
    // std::cout << "Performance difference: " << (unalignedTime / alignedTime - 1) * 100 << "%\n";

    std::cout << measureTime(2, g) << std::endl;
    std::cout << measureTime(2, h) << std::endl;
    std::cout << measureTime(2, f) << std::endl;

    return 0;
}
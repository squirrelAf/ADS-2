// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  return 0.0;
}

uint64_t fact(uint16_t n) {
  return 0.0;
}

double calcItem(double x, uint16_t n) {
  return 0.0;
}

double expn(double x, uint16_t count) {
  return 0.0;
}

double sinn(double x, uint16_t count) {
double factorial(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double sine(double x, int terms) {
    double sineValue = 0.0;
    for (int n = 0; n < terms; ++n) {
        // Члены ряда Тейлора: (-1)^n * x^(2n+1) / (2n+1)!
        sineValue += (pow(-1, n) * pow(x, (2 * n + 1))) / factorial(2 * n + 1);
    }
    return sineValue;
}

int main() {
    double x; // Угол в радианах
    int terms; // Количество слагаемых
    std::cout << "Введите угол в радианах: ";
    std::cin >> x;
    std::cout << "Введите количество слагаемых (для точности): ";
    std::cin >> terms;

    double result = sine(x, terms);
    std::cout << "Синус(" << x << ") с " << terms << " слагаемыми: " 
              << std::setprecision(10) << result << std::endl;

    // Для сравнения можно добавить стандартное вычисление синуса
    std::cout << "Стандартное вычисление sin(" << x << "): " 
              << std::setprecision(10) << sin(x) << std::endl;

    return 0;
}
  
}

double cosn(double x, uint16_t count) {
  return 0.0;
}

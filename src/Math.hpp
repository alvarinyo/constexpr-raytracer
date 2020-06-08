#ifndef CONSTEXPR_RAYTRACER_MATH_HPP
#define CONSTEXPR_RAYTRACER_MATH_HPP

#include <cmath>
#include <concepts>

template <class T>
concept strict_float = std::is_same_v<T, float>;

constexpr bool approx_equal(float a, float b,
                            float epsilon = 0.00001f) noexcept {
  return std::abs(a - b) < epsilon;
}

constexpr int iround(float f) noexcept {
  return static_cast<int>(std::lround(f));
}

#endif
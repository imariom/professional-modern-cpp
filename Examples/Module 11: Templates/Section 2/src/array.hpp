#pragma once
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <algorithm>
#include <cstdint>

template<typename T, std::size_t N>
class array {
public:
    using value_type = T;

    array() {}

    // This constructor is not safe, but usable
    // it does not check bounds.
    array(std::initializer_list<T> values) {
        std::copy(values.begin(), values.end(), data_);
    }

    T& operator[] (std::size_t index) {
        return data_[index];
    }

    T& at(std::size_t index) {
        if (index >= N) {
            throw std::out_of_range{"Index out of range."};
        }
        return data_[index];
    }

    constexpr std::size_t size() const {
        return N;
    }

private:
    T data_[N]; // no use of free store
};

#endif // ARRAY_HPP
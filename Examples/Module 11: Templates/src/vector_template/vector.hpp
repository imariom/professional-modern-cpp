#pragma once

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cstdint>
#include <initializer_list>

template<typename T>
class vector
{
public:
    vector(std::size_t size)
        : elements_(new T[size]), size_(size)
    {
    }

    vector(std::initializer_list<T> values) {
        elements_ = new T[values.size()];
        
        std::size_t index = 0;
        for (const T& value : values)
            elements_[index++] = value;

        size_ = values.size();
    }

    ~vector() {
        delete[] elements_;
    }

    int& operator[] (std::size_t index) {
        return elements_[index];
    }

    const int& operator[] (std::size_t index) const {
        return elements_[index];
    }

    std::size_t size() const {
        return size_;
    }

    T* begin() {
        return size() ? &elements_[0] : nullptr;
    }

    T* end() {
        return size() ? &elements_[0]+size() : nullptr; 
    }

private:
    T* elements_;
    std::size_t size_;
};

#endif // VECTOR_HPP
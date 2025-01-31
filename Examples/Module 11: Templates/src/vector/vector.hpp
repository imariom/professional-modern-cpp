#pragma once

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cstdint>
#include <initializer_list>

class vector
{
public:
    vector(std::size_t size)
        : elements_(new int[size]), size_(size)
    {
    }

    vector(std::initializer_list<int> values) {
        elements_ = new int[values.size()];
        
        std::size_t index = 0;
        for (const int& value : values)
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

    int* begin() {
        return size() ? &elements_[0] : nullptr;
    }

    int* end() {
        return size() ? &elements_[0]+size() : nullptr; 
    }

private:
    int* elements_;
    std::size_t size_;
};

#endif // VECTOR_HPP
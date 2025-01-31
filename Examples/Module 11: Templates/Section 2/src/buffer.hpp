#pragma once
#ifndef BUFFER_HPP
#define BUFFER_HPP

#include <cstdint>

template<typename DataType, std::size_t Size>
struct Buffer
{
    using value_type = DataType;

    constexpr std::size_t size() const {
        return Size;
    }

    DataType data[Size];
};

#endif // BUFFER_HPP
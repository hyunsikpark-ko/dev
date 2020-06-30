#ifndef   __X__TYPE__HH__
#define   __X__TYPE__HH__

namespace x
{
    typedef __INT8_TYPE__   int8;
    typedef __INT16_TYPE__  int16;
    typedef __INT32_TYPE__  int32;
    typedef __INT64_TYPE__  int64;
    typedef __UINT8_TYPE__  uint8;
    typedef __UINT16_TYPE__ uint16;
    typedef __UINT32_TYPE__ uint32;
    typedef __UINT64_TYPE__ uint64;
    typedef bool            boolean;
}

#include <functional>

namespace x
{
    template <typename T> using function = std::function<T>;
}

#endif // __X__TYPE__HH__

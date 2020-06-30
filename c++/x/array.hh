#ifndef   __X__ARRAY__HH__
#define   __X__ARRAY__HH__

#include <x/collection.hh>

namespace x
{
    template <typename T>
    class array : public collection<T>
    {
    protected:  T * __storage;
    protected:  x::uint64 __capacity;
    protected:  x::uint64 __size;
    public:     x::array<T> & operator=(const x::array<T> & o);
    public:     x::array<T> & operator=(x::array<T> && o) noexcept;
    public:     array()
                :   __storage(nullptr),
                    __capacity(x::page::size),
                    __size(0L)
                {
                }
    public:     array(const x::array<T> & o)
                :   __storage(nullptr),
                    __capacity(o.__capacity),
                    __size(o.__size)
                {
                }
    public:     array(x::array<T> && o) noexcept
                :   __storage(o.__storage),
                    __capacity(o.__capacity),
                    __size(o.__size)
                {
                    o.__storage = nullptr;
                    o.__capacity = 0L;
                    o.__size = 0L;
                }
    public:     virtual ~array()
                {
                }
    };
}

#endif // __X__ARRAY__HH__

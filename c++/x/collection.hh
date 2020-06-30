#ifndef   __X__COLLECTION__HH__
#define   __X__COLLECTION__HH__

#include <x/container.hh>

namespace x
{
    template <typename T>
    class collection : public x::container
    {
    public:     x::collection<T> & operator=(const x::collection<T> & o);
    public:     x::collection<T> & operator=(x::collection<T> && o) noexcept;
    public:     collection();
    public:     collection(const x::collection<T> & o);
    public:     collection(x::collection<T> && o) noexcept;
    public:     virtual ~collection();
    };
}

#endif // __X__COLLECTION__HH__

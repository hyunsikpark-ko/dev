#ifndef   __X__COLLECTION__HH__
#define   __X__COLLECTION__HH__

#include <x/container.hh>

namespace x
{
    template <typename T>
    class collection : public x::container
    {
    public:     virtual void clear(x::function<T&> f) = 0;
    public:     virtual void each(x::function<const T &> f) = 0;
    public:     virtual void each(x::function<T &> f) = 0;
    public:     virtual void add(const T & o) = 0;
    public:     virtual void add(T & o) = 0;
    public:     virtual void add(const x::collection<T> & c) = 0;
    public:     virtual void del(const T & o) = 0;
    public:     virtual void del(const x::collection<T> & c) = 0;
    public:     virtual x::boolean exist(const T & o) const = 0;
    public:     collection()
                {
                }
    public:     virtual ~collection()
                {
                }
    public:     collection(const x::collection<T> & o) = delete;
    public:     collection(x::collection<T> && o) noexcept = delete;
    public:     x::collection<T> & operator=(const x::collection<T> & o) = delete;
    public:     x::collection<T> & operator=(x::collection<T> && o) noexcept = delete;
    };
}

#endif // __X__COLLECTION__HH__

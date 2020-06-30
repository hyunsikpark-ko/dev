#ifndef   __X__ARRAY__HH__
#define   __X__ARRAY__HH__

namespace x
{
    template <typename T>
    class array
    {
    public:     x::array<T> & operator=(const x::array<T> & o);
    public:     x::array<T> & operator=(x::array<T> && o) noexcept;
    public:     array();
    public:     array(const x::array<T> & o);
    public:     array(x::array<T> && o) noexcept;
    public:     virtual ~array();
    };
}

#endif // __X__ARRAY__HH__

#ifndef   __X__CONTAINER__HH__
#define   __X__CONTAINER__HH__

namespace x
{
    class container
    {
    public:     x::container & operator=(const x::container & o);
    public:     x::container & operator=(x::container && o) noexcept;
    public:     container();
    public:     container(const x::container & o);
    public:     container(x::container && o) noexcept;
    public:     virtual ~container();
    };
}

#endif // __X__CONTAINER__HH__

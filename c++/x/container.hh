#ifndef   __X__CONTAINER__HH__
#define   __X__CONTAINER__HH__

namespace x
{
    class container
    {
    /**
     * returns the number of elements
     *
     * @return  | x::uint64 | the number of elements in the container |
     */
    public:     virtual x::uint64 size() const = 0;
    /**
     * checks whether the container is empty.
     *
     * @return  | x::boolean | true if the container is empty, false otherwise. |
     */
    public:     virtual x::boolean empty() const = 0;
    /**
     * clear container's all items.
     */
    public:     virtual void clear() = 0;
    /**
     * container class default constructor.
     */
    public:     container()
                {
                }
    /**
     * container class destructor.
     */
    public:     virtual ~container()
                {
                }
    public:     container(const x::container & o) = delete;
    public:     container(x::container && o) noexcept = delete;
    public:     x::container & operator=(const x::container & o) = delete;
    public:     x::container & operator=(x::container && o) noexcept = delete;
    };
}

#endif // __X__CONTAINER__HH__

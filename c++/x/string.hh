#ifndef   __X__STRING__HH__
#define   __X__STRING__HH__

namespace x
{
    class string
    {
    public:     x::string & operator=(const x::string & o)
                {
                    return *this;
                }
    public:     x::string & operator=(x::string && o) noexcept
                {
                    return *this;
                }
    public:     string();
    public:     string(const x::string & o);
    public:     string(x::string && o) noexcept;
    public:     virtual ~string();
    };
}

#endif // __X__STRING__HH__

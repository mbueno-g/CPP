#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string.h>
# include <map>

class Karen
{
    typedef std::map<std::string,void(Karen::*)()> map_t;
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(std::string level);
        void call_method(std::string level, map_t& m);
};

#endif

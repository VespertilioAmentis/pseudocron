#include "task.hxx"
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <vector>

enum task_fields
{
    e_min,
    e_hr,
    e_dy,
    //
    e_cnt
};

using str_vec = std::vector<std::string>;

static str_vec splitstr(const std::string& c_str)
{
    str_vec v;
    boost::split(v, c_str, boost::is_any_of(" "));
    return v;
}

template<task_fields _val>
static unsigned extractNumeric(const std::string& c_strTask)
{
    const auto c_v = splitstr(c_strTask);
    try
    {
    return boost::lexical_cast<unsigned>(c_v.at(_val));
    }
    catch(const boost::bad_lexical_cast&)
    {}
    return 0;
}

unsigned extractMinutesVal(const std::string &c_strTask)
{
    return extractNumeric<e_min>(c_strTask);
}

unsigned extractHoursVal(const std::string &c_strTask)
{
    return extractNumeric<e_hr>(c_strTask);
}

unsigned extractDaysVal(const std::string &c_strTask)
{
    return extractNumeric<e_dy>(c_strTask);
}

std::string extractCmd(const std::string &c_strTask)
{
    return "";
}

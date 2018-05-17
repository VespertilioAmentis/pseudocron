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

enum field_types
{
    ef_val,
    ef_period,
    //
    ef_cnt
};

using str_vec = std::vector<std::string>;

static str_vec splitstr(const std::string& c_str,
                        const std::string& c_delim = " ")
{
    str_vec v;
    boost::split(v, c_str, boost::is_any_of(c_delim));
    return v;
}

template<task_fields _val, field_types _typ = ef_val>
static unsigned extractNumeric(const std::string& c_strTask)
{
    const auto c_v = splitstr(c_strTask);
    try
    {
        const std::string& strVal = c_v.at(_val);
        const auto c_typs = splitstr(strVal, "/");
        const std::string& c_strField = c_typs.at(_typ);
        const auto c_val = boost::lexical_cast<unsigned>(c_strField);
        return c_val;
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

std::string extractCmd(const std::string& c_strTask)
{
    const auto c_v = splitstr(c_strTask);
    str_vec v;
    v.insert(v.end(), c_v.begin() + e_cnt, c_v.end());
    return boost::join(v, " ");
}

unsigned extractMinutesIntrv(const std::string &c_strTask)
{
    return extractNumeric<e_min, ef_period>(c_strTask);
}

unsigned extractDaysIntrv(const std::string &c_strTask)
{
    return extractNumeric<e_dy, ef_period>(c_strTask);
}

unsigned extractHoursIntrv(const std::string &c_strTask)
{
    return extractNumeric<e_hr, ef_period>(c_strTask);
}

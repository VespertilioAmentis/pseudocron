#include "task.hxx"
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <vector>

using b_ptime = boost::posix_time::ptime;

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
        if(strVal == "*")
        {
            return _typ;
        }
        const auto c_typs = splitstr(strVal, "/");
        if(c_typs.size() <= _typ)
        {
            return gc_noval;
        }
        const std::string& c_strField = c_typs.at(_typ);
        const auto c_val = boost::lexical_cast<unsigned>(c_strField);
        return c_val;
    }
    catch(const boost::bad_lexical_cast&)
    {}
    return gc_noval;
}

int extractMinutesVal(const std::string &c_strTask)
{
    return extractNumeric<e_min>(c_strTask);
}

int extractHoursVal(const std::string &c_strTask)
{
    return extractNumeric<e_hr>(c_strTask);
}

int extractDaysVal(const std::string &c_strTask)
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

int extractMinutesIntrv(const std::string &c_strTask)
{
    return extractNumeric<e_min, ef_period>(c_strTask);
}

int extractDaysIntrv(const std::string &c_strTask)
{
    return extractNumeric<e_dy, ef_period>(c_strTask);
}

int extractHoursIntrv(const std::string &c_strTask)
{
    return extractNumeric<e_hr, ef_period>(c_strTask);
}

Task::Task(const std::string &c_cfgLine)
    :min_val(extractMinutesVal(c_cfgLine))
    ,min_intr(extractMinutesIntrv(c_cfgLine))
    ,hr_val(extractHoursVal(c_cfgLine))
    ,hr_intr(extractHoursIntrv(c_cfgLine))
    ,day_val(extractDaysVal(c_cfgLine))
    ,day_intr(extractDaysIntrv(c_cfgLine))
    ,cmd(extractCmd(c_cfgLine))
{
}

bool Task::checkTimeAndExec(const boost::posix_time::ptime &c_tm) const
{
    b_ptime::time_duration_type c_time = c_tm.time_of_day();
    b_ptime::date_type c_dat = c_tm.date();
    if(c_time.hours() != hr_val
            || c_time.minutes() != min_val
            || c_dat.day() != day_val)
    {
        return false;
    }
    system(cmd.c_str());
    return true;
}

#include <string>
#include <boost/date_time.hpp>

const int gc_noval = -1;

int extractMinutesVal(const std::string& c_strTask);
int extractHoursVal(const std::string& c_strTask);
int extractDaysVal(const std::string& c_strTask);

int extractMinutesIntrv(const std::string& c_strTask);
int extractDaysIntrv(const std::string& c_strTask);
int extractHoursIntrv(const std::string& c_strTask);

std::string extractCmd(const std::string& c_strTask);

class Task
{
public:
    explicit Task(const std::string& c_cfgLine);
    bool checkTimeAndExec(const boost::posix_time::ptime& c_tm) const;

private:
    int min_val;
    int min_intr;

    int hr_val;
    int hr_intr;

    int day_val;
    int day_intr;

    std::string cmd;
};

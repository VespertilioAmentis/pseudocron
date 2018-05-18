#include "task.hxx"
#include <fstream>
#include <boost/foreach.hpp>

int main()
{
    std::ifstream ff("/home/toniy/pseudocron.txt");
    std::string str;
    using tasks_vec  = std::vector<Task>;
    tasks_vec vTasks;
    do
    {
        std::getline(ff, str);
        if(!str.empty())
        {
            Task task(str);
            vTasks.push_back(task);
        }
    }
    while(!str.empty());
    while(true)
    {
        const boost::posix_time::ptime c_now = boost::posix_time::second_clock::local_time();
        BOOST_FOREACH(tasks_vec::value_type& task, vTasks)
        {
            const bool c_bRes = task.checkTimeAndExec(c_now);
            std::cout << (c_bRes ? "Executed" : "Skipped") << std::endl;
        }
    }
    return 0;
}

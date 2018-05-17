#include <gtest/gtest.h>
#include <pseudocron_daemon/task.hxx>

// * * * task
// */2 * * task

static const std::string sc_strFracs = "5/2 14/3 3/4 echo blah";
static const unsigned sc_uMin = 5;
static const unsigned sc_uHr = 14;
static const unsigned sc_uDay = 3;
static const std::string sc_strCmd = "echo blah";

TEST(task_tests,
     minutes_value_is_extracted_from_string)
{
    const auto c_uMin = extractMinutesVal(sc_strFracs);
    ASSERT_EQ(sc_uMin, c_uMin);
}

TEST(task_tests,
     hours_value_is_extracted_from_string)
{
    const auto c_uHr = extractHoursVal(sc_strFracs);
    ASSERT_EQ(sc_uHr, c_uHr);
}

TEST(task_tests,
     days_value_is_extracted_from_string)
{
    const auto c_uDy = extractDaysVal(sc_strFracs);
    ASSERT_EQ(sc_uDay, c_uDy);
}

TEST(task_tests,
     cmd_is_extracted_from_string)
{
    const auto strCmd = extractCmd(sc_strFracs);
    ASSERT_EQ(sc_strCmd, strCmd);
}

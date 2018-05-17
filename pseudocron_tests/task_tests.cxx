#include <gtest/gtest.h>
#include <pseudocron_daemon/task.hxx>

// * * * task
// */2 * * task

static const std::string sc_strFracs = "5/8 14/9 3/10 echo blah";
static const unsigned sc_uMin = 5;
static const unsigned sc_uHr = 14;
static const unsigned sc_uDay = 3;
static const unsigned sc_uMinIntrv = 8;
static const unsigned sc_uHrIntrv = 9;
static const unsigned sc_uDayIntrv = 10;
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
     minutes_interval_is_extracted_from_string)
{
    const auto c_uMinIntrv = extractMinutesIntrv(sc_strFracs);
    ASSERT_EQ(sc_uMinIntrv, c_uMinIntrv);
}

TEST(task_tests,
     hours_interval_is_extracted_from_string)
{
    const auto c_uHrIntrv = extractHoursIntrv(sc_strFracs);
    ASSERT_EQ(sc_uHrIntrv, c_uHrIntrv);
}

TEST(task_tests,
     days_interval_is_extracted_from_string)
{
    const auto c_uDyIntrv = extractDaysIntrv(sc_strFracs);
    ASSERT_EQ(sc_uDayIntrv, c_uDyIntrv);
}

TEST(task_tests,
     cmd_is_extracted_from_string)
{
    const auto strCmd = extractCmd(sc_strFracs);
    ASSERT_EQ(sc_strCmd, strCmd);
}

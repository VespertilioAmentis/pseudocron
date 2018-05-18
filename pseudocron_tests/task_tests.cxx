#include <gtest/gtest.h>
#include <pseudocron_daemon/task.hxx>

// * * * task
// */2 * * task

static const std::string sc_strFracs = "5/8 14/9 3/10 echo blah";
static const std::string sc_strStars = "*/8 */9 */10 echo blah";
static const int sc_iMin = 5;
static const int sc_iHr = 14;
static const int sc_iDay = 3;
static const int sc_iMinIntrv = 8;
static const int sc_iHrIntrv = 9;
static const int sc_iDayIntrv = 10;
static const std::string sc_strCmd = "echo blah";

TEST(task_tests,
     minutes_value_is_extracted_from_string)
{
    const auto c_uMin = extractMinutesVal(sc_strFracs);
    ASSERT_EQ(sc_iMin, c_uMin);
}

TEST(task_tests,
     hours_value_is_extracted_from_string)
{
    const auto c_uHr = extractHoursVal(sc_strFracs);
    ASSERT_EQ(sc_iHr, c_uHr);
}

TEST(task_tests,
     days_value_is_extracted_from_string)
{
    const auto c_uDy = extractDaysVal(sc_strFracs);
    ASSERT_EQ(sc_iDay, c_uDy);
}

TEST(task_tests,
     minutes_interval_is_extracted_from_string)
{
    const auto c_uMinIntrv = extractMinutesIntrv(sc_strFracs);
    ASSERT_EQ(sc_iMinIntrv, c_uMinIntrv);
}

TEST(task_tests,
     hours_interval_is_extracted_from_string)
{
    const auto c_uHrIntrv = extractHoursIntrv(sc_strFracs);
    ASSERT_EQ(sc_iHrIntrv, c_uHrIntrv);
}

TEST(task_tests,
     days_interval_is_extracted_from_string)
{
    const auto c_uDyIntrv = extractDaysIntrv(sc_strFracs);
    ASSERT_EQ(sc_iDayIntrv, c_uDyIntrv);
}

TEST(task_tests,
     minutes_interval_is_extracted_from_string_with_stars)
{
    const auto c_uMinIntrv = extractMinutesIntrv(sc_strStars);
    ASSERT_EQ(sc_iMinIntrv, c_uMinIntrv);
}

TEST(task_tests,
     hours_interval_is_extracted_from_string_with_stars)
{
    const auto c_uHrIntrv = extractHoursIntrv(sc_strStars);
    ASSERT_EQ(sc_iHrIntrv, c_uHrIntrv);
}

TEST(task_tests,
     days_interval_is_extracted_from_string_with_stars)
{
    const auto c_uDyIntrv = extractDaysIntrv(sc_strStars);
    ASSERT_EQ(sc_iDayIntrv, c_uDyIntrv);
}

TEST(task_tests,
     minute_interval_is_extracted_from_string_with_no_stars)
{
    const auto c_uMinIntrv = extractDaysIntrv("5 6 7 qwer");
    ASSERT_EQ(0, c_uMinIntrv);
}

TEST(task_tests,
     cmd_is_extracted_from_string)
{
    const auto strCmd = extractCmd(sc_strFracs);
    ASSERT_EQ(sc_strCmd, strCmd);
}

TEST(task_tests,
     task_is_created_from_string)
{

}

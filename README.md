# pseudocron
Pseudocron for Petruccio
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_minutes_value_is_extracted_from_string_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:23:16: error: ‘c_uMin’ does not name a type
     const auto c_uMin = extractMinutesVal(sc_strNums);
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:24:24: error: ‘c_uMin’ was not declared in this scope
     ASSERT_EQ(sc_iMin, c_uMin);
                        ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_hours_value_is_extracted_from_string_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:30:16: error: ‘c_uHr’ does not name a type
     const auto c_uHr = extractHoursVal(sc_strNums);
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:31:23: error: ‘c_uHr’ was not declared in this scope
     ASSERT_EQ(sc_iHr, c_uHr);
                       ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_days_value_is_extracted_from_string_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:37:16: error: ‘c_uDy’ does not name a type
     const auto c_uDy = extractDaysVal(sc_strNums);
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:38:24: error: ‘c_uDy’ was not declared in this scope
     ASSERT_EQ(sc_iDay, c_uDy);
                        ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_minutes_interval_is_extracted_from_string_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:44:16: error: ‘c_uMinIntrv’ does not name a type
     const auto c_uMinIntrv = extractMinutesIntrv(sc_strStars);
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:45:29: error: ‘c_uMinIntrv’ was not declared in this scope
     ASSERT_EQ(sc_iMinIntrv, c_uMinIntrv);
                             ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_hours_interval_is_extracted_from_string_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:51:16: error: ‘c_uHrIntrv’ does not name a type
     const auto c_uHrIntrv = extractHoursIntrv(sc_strStars);
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:52:28: error: ‘c_uHrIntrv’ was not declared in this scope
     ASSERT_EQ(sc_iHrIntrv, c_uHrIntrv);
                            ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_days_interval_is_extracted_from_string_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:58:16: error: ‘c_uDyIntrv’ does not name a type
     const auto c_uDyIntrv = extractDaysIntrv(sc_strStars);
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:59:29: error: ‘c_uDyIntrv’ was not declared in this scope
     ASSERT_EQ(sc_iDayIntrv, c_uDyIntrv);
                             ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_noval_days_interval_is_extracted_from_string_with_no_stars_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:65:16: error: ‘c_iDaysIntrv’ does not name a type
     const auto c_iDaysIntrv = extractDaysIntrv("5 6 7 qwer");
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:66:25: error: ‘c_iDaysIntrv’ was not declared in this scope
     ASSERT_EQ(gc_noval, c_iDaysIntrv);
                         ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_noval_hours_interval_is_extracted_from_string_with_no_stars_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:72:16: error: ‘c_iHrIntrv’ does not name a type
     const auto c_iHrIntrv = extractHoursIntrv("5 6 7 qwer");
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:73:25: error: ‘c_iHrIntrv’ was not declared in this scope
     ASSERT_EQ(gc_noval, c_iHrIntrv);
                         ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_noval_minutes_interval_is_extracted_from_string_with_no_stars_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:79:16: error: ‘c_uMinIntrv’ does not name a type
     const auto c_uMinIntrv = extractMinutesIntrv("5 6 7 qwer");
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:80:25: error: ‘c_uMinIntrv’ was not declared in this scope
     ASSERT_EQ(gc_noval, c_uMinIntrv);
                         ^
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx: In member function ‘virtual void task_tests_cmd_is_extracted_from_string_Test::TestBody()’:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:86:16: error: ‘strCmd’ does not name a type
     const auto strCmd = extractCmd(sc_strNums);
                ^
In file included from /usr/include/gtest/gtest.h:1929:0,
                 from /home/petr/pseudocron/pseudocron_tests/task_tests.cxx:1:
/home/petr/pseudocron/pseudocron_tests/task_tests.cxx:87:26: error: ‘strCmd’ was not declared in this scope
     ASSERT_EQ(sc_strCmd, strCmd);
                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:23:7: error: expected nested-name-specifier before ‘str_vec’
 using str_vec = std::vector<std::string>;
       ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:25:8: error: ‘str_vec’ does not name a type
 static str_vec splitstr(const std::string& c_str,
        ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:60: error: default template arguments may not be used in function templates without -std=c++11 or -std=gnu++11
 static unsigned extractNumeric(const std::string& c_strTask)
                                                            ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘unsigned int extractNumeric(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:36:16: error: ‘c_v’ does not name a type
     const auto c_v = splitstr(c_strTask);
                ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:39:37: error: ‘c_v’ was not declared in this scope
         const std::string& strVal = c_v.at(_val);
                                     ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:44:20: error: ‘c_typs’ does not name a type
         const auto c_typs = splitstr(strVal, "/");
                    ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:45:12: error: ‘c_typs’ was not declared in this scope
         if(c_typs.size() <= _typ)
            ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:49:41: error: ‘c_typs’ was not declared in this scope
         const std::string& c_strField = c_typs.at(_typ);
                                         ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:50:20: error: ‘c_val’ does not name a type
         const auto c_val = boost::lexical_cast<unsigned>(c_strField);
                    ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:51:16: error: ‘c_val’ was not declared in this scope
         return c_val;
                ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘int extractMinutesVal(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:60:43: error: no matching function for call to ‘extractNumeric(const string&)’
     return extractNumeric<e_min>(c_strTask);
                                           ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note: candidate: template<task_fields _val, field_types _typ> unsigned int extractNumeric(const string&)
 static unsigned extractNumeric(const std::string& c_strTask)
                 ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note:   template argument deduction/substitution failed:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:60:43: note:   couldn't deduce template parameter ‘_typ’
     return extractNumeric<e_min>(c_strTask);
                                           ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘int extractHoursVal(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:65:42: error: no matching function for call to ‘extractNumeric(const string&)’
     return extractNumeric<e_hr>(c_strTask);
                                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note: candidate: template<task_fields _val, field_types _typ> unsigned int extractNumeric(const string&)
 static unsigned extractNumeric(const std::string& c_strTask)
                 ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note:   template argument deduction/substitution failed:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:65:42: note:   couldn't deduce template parameter ‘_typ’
     return extractNumeric<e_hr>(c_strTask);
                                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘int extractDaysVal(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:70:42: error: no matching function for call to ‘extractNumeric(const string&)’
     return extractNumeric<e_dy>(c_strTask);
                                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note: candidate: template<task_fields _val, field_types _typ> unsigned int extractNumeric(const string&)
 static unsigned extractNumeric(const std::string& c_strTask)
                 ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note:   template argument deduction/substitution failed:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:70:42: note:   couldn't deduce template parameter ‘_typ’
     return extractNumeric<e_dy>(c_strTask);
                                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘std::__cxx11::string extractCmd(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:75:16: error: ‘c_v’ does not name a type
     const auto c_v = splitstr(c_strTask);
                ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:76:5: error: ‘str_vec’ was not declared in this scope
     str_vec v;
     ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:77:5: error: ‘v’ was not declared in this scope
     v.insert(v.end(), c_v.begin() + e_cnt, c_v.end());
     ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:77:23: error: ‘c_v’ was not declared in this scope
     v.insert(v.end(), c_v.begin() + e_cnt, c_v.end());
                       ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:23:7: error: expected nested-name-specifier before ‘str_vec’
 using str_vec = std::vector<std::string>;
       ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:25:8: error: ‘str_vec’ does not name a type
 static str_vec splitstr(const std::string& c_str,
        ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:60: error: default template arguments may not be used in function templates without -std=c++11 or -std=gnu++11
 static unsigned extractNumeric(const std::string& c_strTask)
                                                            ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘unsigned int extractNumeric(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:36:16: error: ‘c_v’ does not name a type
     const auto c_v = splitstr(c_strTask);
                ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:39:37: error: ‘c_v’ was not declared in this scope
         const std::string& strVal = c_v.at(_val);
                                     ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:44:20: error: ‘c_typs’ does not name a type
         const auto c_typs = splitstr(strVal, "/");
                    ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:45:12: error: ‘c_typs’ was not declared in this scope
         if(c_typs.size() <= _typ)
            ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:49:41: error: ‘c_typs’ was not declared in this scope
         const std::string& c_strField = c_typs.at(_typ);
                                         ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:50:20: error: ‘c_val’ does not name a type
         const auto c_val = boost::lexical_cast<unsigned>(c_strField);
                    ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:51:16: error: ‘c_val’ was not declared in this scope
         return c_val;
                ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘int extractMinutesVal(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:60:43: error: no matching function for call to ‘extractNumeric(const string&)’
     return extractNumeric<e_min>(c_strTask);
                                           ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note: candidate: template<task_fields _val, field_types _typ> unsigned int extractNumeric(const string&)
 static unsigned extractNumeric(const std::string& c_strTask)
                 ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note:   template argument deduction/substitution failed:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:60:43: note:   couldn't deduce template parameter ‘_typ’
     return extractNumeric<e_min>(c_strTask);
                                           ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘int extractHoursVal(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:65:42: error: no matching function for call to ‘extractNumeric(const string&)’
     return extractNumeric<e_hr>(c_strTask);
                                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note: candidate: template<task_fields _val, field_types _typ> unsigned int extractNumeric(const string&)
 static unsigned extractNumeric(const std::string& c_strTask)
                 ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note:   template argument deduction/substitution failed:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:65:42: note:   couldn't deduce template parameter ‘_typ’
     return extractNumeric<e_hr>(c_strTask);
                                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘int extractDaysVal(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:70:42: error: no matching function for call to ‘extractNumeric(const string&)’
     return extractNumeric<e_dy>(c_strTask);
                                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note: candidate: template<task_fields _val, field_types _typ> unsigned int extractNumeric(const string&)
 static unsigned extractNumeric(const std::string& c_strTask)
                 ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:34:17: note:   template argument deduction/substitution failed:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:70:42: note:   couldn't deduce template parameter ‘_typ’
     return extractNumeric<e_dy>(c_strTask);
                                          ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx: In function ‘std::__cxx11::string extractCmd(const string&)’:
/home/petr/pseudocron/pseudocron_daemon/task.cxx:75:16: error: ‘c_v’ does not name a type
     const auto c_v = splitstr(c_strTask);
                ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:76:5: error: ‘str_vec’ was not declared in this scope
     str_vec v;
     ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:77:5: error: ‘v’ was not declared in this scope
     v.insert(v.end(), c_v.begin() + e_cnt, c_v.end());
     ^
/home/petr/pseudocron/pseudocron_daemon/task.cxx:77:23: error: ‘c_v’ was not declared in this scope
     v.insert(v.end(), c_v.begin() + e_cnt, c_v.end());
                       ^

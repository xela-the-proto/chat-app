cmake_minimum_required(VERSION 3.0.0)
project(chat VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(chat #main2Date.cpp 
                    #mainEaster.cpp 
                    mainMessage.cpp 
                    date.h advancedDate.h message.h Time.h EnglishTime.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

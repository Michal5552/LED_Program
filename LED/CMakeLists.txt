set(PROJECT_NAME LED)
set(SOURCE_FILES main.cpp mainwindow.cpp mainwindow.h Led_Component.cpp Led_Component.h helpdialog.h helpdialog.cpp authorinformation.h authorinformation.cpp ../build-LED-Desktop_Qt_5_13_0_clang_64bit-Debug/ui_mainwindow.h ../build-LED-Desktop_Qt_5_13_0_clang_64bit-Debug/ui_helpdialog.h ../build-LED-Desktop_Qt_5_13_0_clang_64bit-Debug/ui_authorinformation.h)

cmake_minimum_required(VERSION 3.14)
project(PROJECT_NAME)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5Widgets CONFIG
        PATHS /Users/michal/Qt/5.13.0/clang_64/lib/cmake/Qt5Widgets
        NO_DEFAULT_PATH)

list(APPEND THIRD_PARTY_LIBS Qt5::Widgets Qt5::Core)


add_executable(PROJECT_NAME ${SOURCE_FILES})

target_link_libraries(PROJECT_NAME
        Qt5::Core
        Qt5::Widgets
        Qt5::Gui)
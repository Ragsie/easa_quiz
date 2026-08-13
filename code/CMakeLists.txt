cmake_minimum_required(VERSION 3.19)
project(b2_quiz LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(b2_quiz
    WIN32 MACOSX_BUNDLE
    main.cpp
    questions_part1.cpp
    questions_part2.cpp
    questions_part3.cpp
    questions_part4.cpp




)

target_link_libraries(b2_quiz
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS b2_quiz
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET b2_quiz
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})

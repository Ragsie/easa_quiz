cmake_minimum_required(VERSION 3.16)

project(Easa-B2-Quiz LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
qt_standard_project_setup()

# Bemærk MANUAL_FINALIZATION eller sæt WIN32 egenskab
qt_add_executable(Easa-B2-Quiz
    main.cpp
    question.h
    question_bank/ATA06.cpp
    question_bank/ATA21.cpp
    question_bank/ATA22.cpp
    question_bank/ATA23.cpp
    question_bank/ATA24.cpp
    question_bank/ATA25.cpp
    question_bank/ATA26.cpp
    question_bank/ATA27.cpp
    question_bank/ATA28.cpp
    question_bank/ATA29.cpp
    question_bank/ATA30.cpp
    question_bank/ATA31.cpp
    question_bank/ATA32.cpp
    question_bank/ATA33.cpp
    question_bank/ATA34.cpp
    question_bank/ATA35.cpp
    question_bank/ATA36.cpp
    question_bank/ATA38.cpp
    question_bank/ATA42.cpp
    question_bank/ATA44.cpp
    question_bank/ATA46.cpp
    question_bank/ATAtof.cpp
)

# Fjerner den sorte kommandoprompt på Windows:
set_target_properties(Easa-B2-Quiz PROPERTIES WIN32_EXECUTABLE TRUE)

target_include_directories(Easa-B2-Quiz PRIVATE .)

target_link_libraries(Easa-B2-Quiz PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)

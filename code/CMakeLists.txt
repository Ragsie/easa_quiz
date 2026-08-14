cmake_minimum_required(VERSION 3.16)

project(Easa-B2-Quiz LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)
qt_standard_project_setup()

# Omdøbt fra b2_quiz til Easa-B2-Quiz
qt_add_executable(Easa-B2-Quiz
    main.cpp
    question.h
    ATA06.cpp
    ATA21.cpp
    ATA22.cpp
    ATA23.cpp
    ATA24.cpp
    ATA25.cpp
    ATA26.cpp
    ATA27.cpp
    ATA28.cpp
    ATA29.cpp
    ATA30.cpp
    ATA31.cpp
    ATA32.cpp
    ATA33.cpp
    ATA34.cpp
    ATA35.cpp
    ATA36.cpp
    ATA38.cpp
    ATA42.cpp
    ATA44.cpp
    ATA46.cpp
    ATAtof.cpp
)

# Omdøbt fra b2_quiz til Easa-B2-Quiz
target_link_libraries(Easa-B2-Quiz PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
)

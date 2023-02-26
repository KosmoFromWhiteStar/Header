# CMakeList.txt: проект CMake для Header.project; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("Header.project" VERSION 1.0)

set (CMAKE_EXX_STANDART 14)
# Добавьте источник в исполняем"src/Header.project.cpp"а.
add_executable (Header.project src/"Header.project.cpp" incl/"Header.project.")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

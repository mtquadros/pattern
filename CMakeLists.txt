# CMakeList.txt: projeto de CMake para pattern, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

project ("pattern")

# Adicione a origem ao executável deste projeto.
add_executable (pattern "pattern.cpp" "pattern.h")

# TODO: Adicione testes e instale destinos, se necessário.

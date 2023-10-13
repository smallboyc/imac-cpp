# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# La version du C++ que l'on souhaite utiliser (dans notre cas C++17)
set(CMAKE_CXX_STANDARD 17)

# Le nom du projet
project(TD08)

# On souhaite placer l'exécutable dans un sous-dossier "bin" au lieu de le mettre dans le dossier build
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(exo "src/main.cpp" "src/fraction.cpp" "src/utils.cpp")


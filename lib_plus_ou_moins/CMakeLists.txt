# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.10)

# Notre projet est étiqueté plus_ou_moins
project(plus_ou_moins)


# Crée des variables avec les fichiers à compiler
set(SRCS
    plus_ou_moins.c
)

set(HEADERS
    plus_ou_moins.h
)

add_library(plus_ou_moins ${SRCS} ${HEADERS})

target_include_directories(plus_ou_moins PUBLIC .)
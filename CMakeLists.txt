# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté plus_ou_moins
project(plus_ou_moins)

# On inclut notre bibliothèque dans le processus de CMake
add_subdirectory(lib_plus_ou_moins)

# Crée des variables avec les fichiers à compiler
set(SRCS
    main.c
    )
    
# Notre exécutable
add_executable(main ${SRCS})

# Et pour que l'exécutable fonctionne, il faut lui indiquer la bibliothèque dont il dépend
target_link_libraries(main plus_ou_moins)
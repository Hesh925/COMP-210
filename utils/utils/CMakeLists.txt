set(utils_source_files
        misc.cpp
        printing.cpp
        sorting.cpp
        search.cpp
        utils.cpp
        utils.h
)

add_library(utils SHARED ${utils_source_files})
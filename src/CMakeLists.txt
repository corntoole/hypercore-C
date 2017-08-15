add_library(hypercore hypercore.c)

target_include_directories(hypercore PUBLIC ${CMAKE_SOURCE_DIR} ../include)


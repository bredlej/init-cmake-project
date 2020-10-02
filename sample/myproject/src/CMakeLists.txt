set(HEADER_LIST "${Myproject_SOURCE_DIR}/include/myproject/mylibrary.h")

add_library(myproject_library mylibrary.c ${HEADER_LIST})

target_include_directories(myproject_library PUBLIC ../include)

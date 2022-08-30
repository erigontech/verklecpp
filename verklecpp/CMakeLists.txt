file(GLOB_RECURSE SRC_FILES "*.cpp")
file(GLOB_RECURSE HEADER_FILES "*.hpp")

add_library(verklecpp ${SRC_FILES} ${HEADER_FILES})

target_include_directories (verklecpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
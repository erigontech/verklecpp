file(GLOB_RECURSE VERKLECPP_SRC "*.cpp" "*.hpp")

list(FILTER VERKLECPP_SRC EXCLUDE REGEX "_test\\.cpp$")

add_library(verklecpp ${VERKLECPP_SRC})
target_include_directories(verklecpp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
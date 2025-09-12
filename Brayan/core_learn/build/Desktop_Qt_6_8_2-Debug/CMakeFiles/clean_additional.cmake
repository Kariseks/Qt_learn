# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/core_learn_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/core_learn_autogen.dir/ParseCache.txt"
  "core_learn_autogen"
  )
endif()

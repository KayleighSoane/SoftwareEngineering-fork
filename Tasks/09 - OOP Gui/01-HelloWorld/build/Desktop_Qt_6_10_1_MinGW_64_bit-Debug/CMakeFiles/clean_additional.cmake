# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "01-HelloWorld_autogen"
  "CMakeFiles\\01-HelloWorld_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\01-HelloWorld_autogen.dir\\ParseCache.txt"
  )
endif()

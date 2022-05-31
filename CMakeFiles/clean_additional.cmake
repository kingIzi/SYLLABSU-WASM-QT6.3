# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\syllabus_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\syllabus_autogen.dir\\ParseCache.txt"
  "syllabus_autogen"
  )
endif()

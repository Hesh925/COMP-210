set(LIB_NAME Utils)
message(STATUS "LIB: ${LIB_NAME}")

include(Utils/Utils.txt)
include(Stacks/Stacks.txt)
include(Lists/Lists.txt)
include(Queue/Queue.txt)

message(STATUS "UTILS_SOURCES: ${UTILS_SOURCES}")
message(STATUS "STACKS_SOURCES: ${STACKS_SOURCES}")
message(STATUS "LISTS_SOURCES: ${LISTS_SOURCES}")
message(STATUS "QUEUE_SOURCES: ${QUEUE_SOURCES}")

add_library(${LIB_NAME} ${UTILS_SOURCES} ${STACKS_SOURCES} ${LISTS_SOURCES} ${QUEUE_SOURCES})
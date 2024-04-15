set(LIB_NAME Utils)

include(Utils/Utils.txt)
include(Stacks/Stacks.txt)
include(Lists/Lists.txt)
include(Queue/Queue.txt)

message(DEBUG "LIB: ${LIB_NAME}")
message(DEBUG "- UTILS_SOURCES: ${UTILS_SOURCES}")
message(DEBUG "- STACKS_SOURCES: ${STACKS_SOURCES}")
message(DEBUG "- LISTS_SOURCES: ${LISTS_SOURCES}")
message(DEBUG "- QUEUE_SOURCES: ${QUEUE_SOURCES}")

add_library(${LIB_NAME} ${UTILS_SOURCES} ${STACKS_SOURCES} ${LISTS_SOURCES} ${QUEUE_SOURCES})
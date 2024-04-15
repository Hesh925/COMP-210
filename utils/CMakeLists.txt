set(LIB_NAME Utils)
message(DEBUG "LIB: ${LIB_NAME}")

include(Utils/Utils.txt)
include(Stacks/Stacks.txt)
include(Lists/Lists.txt)
include(Queue/Queue.txt)

add_library(${LIB_NAME} ${UTILS_SOURCES} ${STACKS_SOURCES} ${LISTS_SOURCES} ${QUEUE_SOURCES})
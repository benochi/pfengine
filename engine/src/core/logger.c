#include "logger.h"

// TODO: Temporary
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

b8 initialize_logging() {
    // TODO: Create log file
    return TRUE;
}

void shutdown_logging() {
    // TODO: Cleanup log file and write up queued entires
}

KAPI void log_output(log_level level, const char* message, ...) {
    const char* level_strings[6] = {"[FATAL]: ", "[ERROR]: ", "[WARN]: ", "[INFO]: ", "[DEBUG]: ", "[TRACE]: "};
    b8 is_error = level < 2;

    //! technically imposes a 32k character limit on a single log entry, but...
    //!  DON'T DO THAT!!!
    char out_message[32000];
    memset(out_message, 0, sizeof(out_message));
}

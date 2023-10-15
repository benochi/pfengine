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

    // format original message
    // NOTE: oddly enough, MS's headers override the GCC/Clang va_list type with a "tytpedef_char* va_list" in some cases,
    //  and as a result throws a astrange error here.  The workaround for now is to just use __builtin_va_list, which is the type GCC/Clang's va_start expects.
    __builtin_va_list arg_ptr;
    va_start(arg_ptr, message);
    vsnprintf(out_message, 32000, message, arg_ptr);
    va_end(arg_ptr);

    sprintf(out_message, "%s%s\n", level_strings[level], out_message);

    // TODO: Platform specific output
    printf("%s", out_message);
}

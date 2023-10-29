#include <core/logger.h>
#include <core/asserts.h>

// TODO: Test
#include <platform/platform.h>

int main(void) {
    KFATAL("A TEST MESSAGE: %f", 3.14f);
    KERROR("A TEST MESSAGE: %f", 3.14f);
    KWARN("A TEST MESSAGE: %f", 3.14f);
    KINFO("A TEST MESSAGE: %f", 3.14f);
    KDEBUG("A TEST MESSAGE: %f", 3.14f);
    KTRACE("A TEST MESSAGE: %f", 3.14f);

    platform_state state;
    if (platform_startup(&state, "Kohi engine testbed", 100, 100, 1280, 720)) {
        while (TRUE) {
            platform_pump_messages(&state);
        }
    }

    platform_shutdown(&state);

    return 0;
}
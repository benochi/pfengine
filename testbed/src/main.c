#include <core/logger.h>

int main(void) {
    KFATAL("A TEST MESSAGE: %f", 3.14f);
    KERROR("A TEST MESSAGE: %f", 3.14f);
    KWARN("A TEST MESSAGE: %f", 3.14f);
    KINFO("A TEST MESSAGE: %f", 3.14f);
    KDEBUG("A TEST MESSAGE: %f", 3.14f);
    KTRACE("A TEST MESSAGE: %f", 3.14f);

    KASSERT(1 == 0);
    return 0;
}
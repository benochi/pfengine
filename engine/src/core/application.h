#pragma once

#include "defines.h"

// aplication configuration
typedef struct application_config {
    // window starting x position, if applicable
    i16 start_pos_x;
    // starting y pos
    i16 start_pos_y;
    // window width
    i16 start_width;
    // window height
    i16 start_height;

    // application name used in windowing
    char* name;
} application_config;

KAPI b8 application_create(application_config* config);

KAPI b8 application_run();
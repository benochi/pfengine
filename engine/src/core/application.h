#pragma once

#include "defines.h"

struct game;
// application configuration
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

KAPI b8 application_create(struct game* game_inst);

KAPI b8 application_run();
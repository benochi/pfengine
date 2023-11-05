#pragma once

#include "core/application.h"

typedef struct game {
    application_config app_config;

    // Function pointer to games initialize function.
    b8 (*initialize)(struct game* game_inst);

    // function pointer to games update function.
    b8 (*update)(struct game* game_inst, f32 delta_time);

    // function pointer to games render function.
    b8 (*render)(struct game* game_inst, f32 delta_time);

    // Function pointer to handle resizes.
    void (*on_resize)(struct game* game_inst, u32 width, u32 height);

    // Game-specific game state. Created and managed by the game.
    void* state;
} game;
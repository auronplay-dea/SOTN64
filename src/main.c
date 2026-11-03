#include <libdragon.h>

int main(void) {
    display_init(
        RESOLUTION_320x240,
        DEPTH_16_BPP,
        2,
        GAMMA_NONE,
        FILTERS_RESAMPLE
    );

    surface_t *screen;

    while (1) {
        while (!(screen = display_try_get()));

        graphics_fill_screen(
            screen,
            graphics_make_color(15, 10, 25, 255)
        );

        // Suelo del castillo
        graphics_draw_box(
            screen, 0, 190, 320, 240,
            graphics_make_color(65, 55, 75, 255)
        );

        // Silueta del castillo
        graphics_draw_box(
            screen, 90, 65, 230, 190,
            graphics_make_color(45, 40, 60, 255)
        );

        // Personaje provisional
        graphics_draw_box(
            screen, 145, 155, 160, 185,
            graphics_make_color(180, 180, 210, 255)
        );

        graphics_draw_text(screen, 100, 25, "SOTN64 - TEST");

        display_show(screen);
    }

    return 0;
}

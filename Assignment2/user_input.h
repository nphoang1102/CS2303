/* Some global variables */
#define MAX_SIZE 64

/* Function calls */
char ui_get_input(unsigned int *x, unsigned int *y, unsigned int *gen, char *print, char *pause, char **grid);
void ui_init_config(char *init, unsigned int x, unsigned int y);
void ui_grid_plot(char *grid, unsigned int x, unsigned int y);
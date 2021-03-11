#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <hal.h>
#include "matrix.h"
#include "timer.h"

static matrix_row_t matrix[MATRIX_ROWS];
static matrix_row_t matrix_debouncing[MATRIX_ROWS];
static bool debouncing = false;
static uint16_t debouncing_time = 0;

void matrix_init(void) {
    memset(matrix, 0, MATRIX_ROWS * sizeof(matrix_row_t));
    memset(matrix_debouncing, 0, MATRIX_ROWS * sizeof(matrix_row_t));

    matrix_init_quantum();
}

uint8_t matrix_scan(void) {
    matrix_scan_quantum();
    return 1;
}

matrix_row_t matrix_get_row(uint8_t row)
{
    return matrix[row];
}

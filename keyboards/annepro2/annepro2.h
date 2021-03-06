/*
 * Copyright (c) 2018 Yaotian Feng
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define OVERRIDE __attribute__ ((noinline))

extern uint16_t annepro2LedMatrix[MATRIX_ROWS * MATRIX_COLS];

enum AP2KeyCodes {
    KC_AP2_BT_SCAN1 = SAFE_RANGE,
    KC_AP2_BT_SCAN2,
    KC_AP2_BT_SCAN3,
    KC_AP2_BT_SCAN4,
    KC_AP2_BT_CONN1,
    KC_AP2_BT_CONN2,
    KC_AP2_BT_CONN3,
    KC_AP2_BT_CONN4,
    KC_AP2_BT_UNPAIR,
    KC_AP2_USB,
    AP2_SAFE_RANGE,
};

void annepro2LedDisable(void);
void annepro2LedEnable(void);
void annepro2LedUpdate(uint8_t row, uint8_t col);
void annepro2LedUpdateRow(uint8_t row);

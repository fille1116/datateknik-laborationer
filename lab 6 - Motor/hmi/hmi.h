﻿/*
 * hmi.c
 *
 * Functions for user interaction.
 *
 * Author:	Mathias Beckius
 *
 * Date:	2014-11-28
 */

#pragma once

#include <inttypes.h>

void hmi_init(void);
uint8_t input_int(char *, uint16_t *);
void output_msg(char *, char *, uint8_t);

/*
 * Copyright (c) 2014-2020 Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

PwmOut CLK(PWM_OUT);

const float t = 120; // ms

int main() {
  CLK.period(0.020);

  while (1) {
    for (float offset = 0.0; offset < 0.051; offset += 1 / (t - 20)) {
      CLK.write(0.050 + offset);
      wait_us(20000);
    }
  }
}

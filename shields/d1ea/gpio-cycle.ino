/*
 * gpio-cycle.ino
 * 
 * Cycles through GPIO pins and sets them high for visual troubleshooting using a suitable shield.
 * 
 * https://github.com/panasonic-industry-europe/iot-components/tree/main/shields/d1ea
 * 
 * Copyright 2021 Panasonic Industry Europe GmbH
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Select your pin configuration here.

// Nordic Semiconductors nRF52840-DK
// Panasonic Industry PAN1780 (Nordic nRF52840) evaluation board
// Panasonic Industry IoT Components PAN1780 (nRF52840) board
//                A0,  A1,  A2,  A3,  A4,  A5,  D0,  D1,  D2,  D3,  D4,  D5,  D6,  D7,  D8,  D9,  D10, D11, D12, D13, SDA, SCL
uint8_t pins[] = {A0,  A1,  A2,  A3,  A4,  A5,  33,  34,  35,  36,  37,  38,  39,  40,  42,  43,  44,  45,  46,  47,  26,  27};

// Arduino UNO (Atmel ATmega328P)
//                   D0,  D1,  D2,  D3,  D4,  D5,  D6,  D7,  D8,  D9, D10, D11, D12, D13
// uint8_t pins[] = {0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13};

int n_pins;

// Setup pins and switch off LEDs.
void setup() {
  n_pins = sizeof(pins);

  for(int i = 0; i < n_pins; i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW);
  }
}

// Loop through pins and toggle one LED at a time.
void loop() {  
  for(int i = 0; i < n_pins; i++) {
    digitalWrite(pins[i], HIGH);
    delay(70);
    digitalWrite(pins[i], LOW);
  }
}

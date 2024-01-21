/* Copyright 2021 Afternoon Labs
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

#define SPLIT_HAND_PIN GP20
#define SERIAL_USART_TX_PIN GP1
#define I2C1_SCL_PIN GP15
#define I2C1_SDA_PIN GP14
#define I2C_DRIVER I2CD1
#define HAL_USE_I2C TRUE
#define VIA_EEPROM_CUSTOM_CONFIG_SIZE 8
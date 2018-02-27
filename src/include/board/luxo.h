/*
 Copyright (C) AC SOFTWARE SP. Z O.O.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef LUXO_H_
#define LUXO_H_

#define LED_RED_PORT    15
#define B_RELAY1_PORT   5
#define B_RELAY2_PORT   13
#define B_CFG_PORT	    4
#define B_BTN1_PORT        12
#define B_BTN2_PORT        14
#define B_SENSOR_PORT1     2

void supla_esp_board_start(void);

void supla_esp_board_gpio_hi(int port, char hi);
char supla_esp_board_gpio_is_hi(int port);
char supla_esp_board_gpio_relay_on(int port);

void supla_esp_board_send_channel_values_with_delay(void *srpc);

#define BOARD_GPIO_OUTPUT_SET_HI if ( port >= 20 ) { supla_esp_board_gpio_hi(port, hi); return; };
#define BOARD_GPIO_OUTPUT_IS_HI if ( port >= 20 ) return supla_esp_board_gpio_is_hi(port);

#define ESP8266_LOG_DISABLED

#endif

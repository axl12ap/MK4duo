/**
 * MK4duo Firmware for 3D Printer, Laser and CNC
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (C) 2013 Alberto Cotronei @MagoKimbra
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _ENUM_H_
#define _ENUM_H_

/**
 * Axis indices as enumerated constants
 *
 *  - X_AXIS, Y_AXIS, and Z_AXIS should be used for axes in Cartesian space
 *  - A_AXIS, B_AXIS, and C_AXIS should be used for Steppers, corresponding to XYZ on Cartesians
 *  - X_HEAD, Y_HEAD, and Z_HEAD should be used for Steppers on Core kinematics
 */
enum AxisEnum : unsigned char {
  X_AXIS  = 0,
  A_AXIS  = 0,
  Y_AXIS  = 1,
  B_AXIS  = 1,
  Z_AXIS  = 2,
  C_AXIS  = 2,
  E_AXIS  = 3,
  X_HEAD  = 4,
  Y_HEAD  = 5,
  Z_HEAD  = 6,
  E0_AXIS = 3,
  E1_AXIS = 4,
  E2_AXIS = 5,
  E3_AXIS = 6,
  E4_AXIS = 7,
  E5_AXIS = 8,
  ALL_AXES  = 0xFE,
  NO_AXIS   = 0xFF
};

/**
 * Printer
 */
enum FlagVarious : char {
  bit_running,
  bit_printing,
  bit_pos_saved,
  bit_relative_mode,
  bit_volumetric_enabled,
  bit_wait_for_user,
  bit_wait_for_heatup,
  bit_allow_cold_extrude,
  bit_autoreport_temp,
  bit_autoreport_sd,
  bit_suspend_autoreport,
  bit_abort_sd_printing,
  bit_filament_out,
  bit_g38_move
};
enum PrinterMode : char {
  PRINTER_MODE_FFF,           // M450 S0 or M451
  PRINTER_MODE_LASER,         // M450 S1 or M452
  PRINTER_MODE_CNC,           // M450 S2 or M453
  PRINTER_MODE_PICKER,        // M450 S3 or M454
  PRINTER_MODE_SOLDER,        // M450 S4
  PRINTER_MODE_PLOTTER,
  PRINTER_MODE_COUNT
};
enum MK4duoInterruptEvent : char {
  INTERRUPT_EVENT_NONE,
  INTERRUPT_EVENT_FIL_RUNOUT,
  INTERRUPT_EVENT_ENC_DETECT
};

/**
 * States for managing MK4duo and host communication
 * MK4duo sends messages if blocked or busy
 */
enum MK4duoBusyState : char {
  NotBusy,          // Not in a handler
  InHandler,        // Processing a GCode
  InProcess,        // Known to be blocking command input (as in G29)
  WaitHeater,       // Wait heater
  PausedforUser,    // Blocking pending any input
  PausedforInput,   // Blocking pending text input
  DoorOpen          // Door open
};

/**
 * DUAL X CARRIAGE
 */
enum DualXMode {
  DXC_FULL_CONTROL_MODE,
  DXC_AUTO_PARK_MODE,
  DXC_DUPLICATION_MODE,
  DXC_SCALED_DUPLICATION_MODE
};

/**
 * Work Space Plane
 */
enum WorkspacePlane { PLANE_XY, PLANE_ZX, PLANE_YZ };

/**
 * Endstop
 */
enum FlagEndstops : char {
  bit_endstop_enabled,
  bit_endstop_globally,
  bit_soft_endstop,
  bit_probe_endstop,
  bit_g38_endstop_hit,
  bit_monitor_flag
};
enum EndstopEnum : char {
  X_MIN,        // Bit 0
  Y_MIN,        // Bit 1
  Z_MIN,        // Bit 2
  Z_PROBE,      // Bit 3
  X_MAX,        // Bit 4
  Y_MAX,        // Bit 5
  Z_MAX,        // Bit 6
  X2_MIN,       // Bit 7
  X2_MAX,       // Bit 8
  Y2_MIN,       // Bit 9
  Y2_MAX,       // Bit 10
  Z2_MIN,       // Bit 11
  Z2_MAX,       // Bit 12
  Z3_MIN,       // Bit 13
  Z3_MAX,       // Bit 14
  FIL_RUNOUT,   // Bit 15
  DOOR_OPEN,    // Bit 16
  POWER_CHECK   // Bit 17
};

/**
 * Heaters
 */
enum FlagHeaters : char {
  heater_flag_use_pid,
  heater_flag_tuning,
  heater_flag_hardware_inverted,
  heater_flag_active,
  heater_flag_idle,
  heater_flag_fault
};
enum heater_t : uint8_t { IS_HOTEND = 0, IS_BED = 1, IS_CHAMBER = 2, IS_COOLER = 3 };

/**
 * Fans
 */
enum FlagFans : char {
  fan_flag_hardware_inverted, // Bit 0
  fan_flag_idle               // Bit 1
};

#endif /* _ENUM_H_ */

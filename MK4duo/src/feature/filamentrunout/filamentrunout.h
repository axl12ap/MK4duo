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

/**
 * filrunout.h
 *
 * Copyright (C) 2017 Alberto Cotronei @MagoKimbra
 */

#ifndef _FILRUNOUT_H_
#define _FILRUNOUT_H_

#if HAS_FIL_RUNOUT

  class FilamentRunOut {

    public: /** Constructor */

      FilamentRunOut() {}

    public: /** Public Function */

      static void init();
      static void setup_pullup(const bool onoff);
      static void spin();

    private: /** Private Function */

      FORCE_INLINE static bool read() {

        #if (PIN_EXISTS(FIL_RUNOUT1)

          // Read the sensor for the active extruder
          #if ENABLED(DUAL_X_CARRIAGE)
            bool is_out;
            const bool out1 = READ(FIL_RUNOUT0_PIN) ^ endstops.isLogic(FIL_RUNOUT),
                       out2 = READ(FIL_RUNOUT1_PIN) ^ endstops.isLogic(FIL_RUNOUT);
            if (mechanics.extruder_duplication_enabled)
              is_out = out1 || out2;
            else
              is_out = tools.active_extruder ? out2 : out1;
            return is_out;
          #else
            switch (tools.active_extruder) {
              case 0: return READ(FIL_RUNOUT0_PIN) ^ endstops.isLogic(FIL_RUNOUT);
              case 1: return READ(FIL_RUNOUT1_PIN) ^ endstops.isLogic(FIL_RUNOUT);
              #if HAS_FIL_RUNOUT2
                case 2: return READ(FIL_RUNOUT2_PIN) ^ endstops.isLogic(FIL_RUNOUT);
                #if HAS_FIL_RUNOUT3
                  case 3: return READ(FIL_RUNOUT3_PIN) ^ endstops.isLogic(FIL_RUNOUT);
                  #if HAS_FIL_RUNOUT4
                    case 4: return READ(FIL_RUNOUT4_PIN) ^ endstops.isLogic(FIL_RUNOUT);
                    #if HAS_FIL_RUNOUT5
                      case 5: return READ(FIL_RUNOUT5_PIN) ^ endstops.isLogic(FIL_RUNOUT);
                    #endif
                  #endif
                #endif
              #endif
              default: return false;
            }
          #endif

        #else

          // A single sensor applying to all extruders
          return READ(FIL_RUNOUT0_PIN) ^ endstops.isLogic(FIL_RUNOUT);

        #endif

      }

  };

  extern FilamentRunOut filamentrunout;

#endif // HAS_FIL_RUNOUT

#endif /* _FILRUNOUT_H_ */

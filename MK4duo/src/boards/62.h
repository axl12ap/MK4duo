/****************************************************************************************
* 62 - Sanguinololu 1.2 and above
****************************************************************************************/

//###CHIP
#if DISABLED(__AVR_ATmega644P__) && DISABLED(__AVR_ATmega1284P__)
  #error Oops!  Make sure you have 'Sanguino' or 'Anet' selected from the 'Tools -> Boards' menu.
#endif
//@@@

#define KNOWN_BOARD 1

//###BOARD_NAME
#if DISABLED(BOARD_NAME)
	#define BOARD_NAME "Sanguinololu 1.2"
#endif
//@@@


//###X_AXIS
#define ORIG_X_STEP_PIN 15
#define ORIG_X_DIR_PIN 21
#define ORIG_X_ENABLE_PIN -1
#define ORIG_X_CS_PIN -1

//###Y_AXIS
#define ORIG_Y_STEP_PIN 22
#define ORIG_Y_DIR_PIN 23
#define ORIG_Y_ENABLE_PIN -1
#define ORIG_Y_CS_PIN -1

//###Z_AXIS
#define ORIG_Z_STEP_PIN 3
#define ORIG_Z_DIR_PIN 2
#define ORIG_Z_ENABLE_PIN -1
#define ORIG_Z_CS_PIN -1

//###EXTRUDER_0
#define ORIG_E0_STEP_PIN 1
#define ORIG_E0_DIR_PIN 0
#define ORIG_E0_ENABLE_PIN -1
#define ORIG_E0_CS_PIN -1
#define ORIG_SOL0_PIN -1

//###EXTRUDER_1
#define ORIG_E1_STEP_PIN -1
#define ORIG_E1_DIR_PIN -1
#define ORIG_E1_ENABLE_PIN -1
#define ORIG_E1_CS_PIN -1
#define ORIG_SOL1_PIN -1

//###EXTRUDER_2
#define ORIG_E2_STEP_PIN -1
#define ORIG_E2_DIR_PIN -1
#define ORIG_E2_ENABLE_PIN -1
#define ORIG_E2_CS_PIN -1
#define ORIG_SOL2_PIN -1

//###EXTRUDER_3
#define ORIG_E3_STEP_PIN -1
#define ORIG_E3_DIR_PIN -1
#define ORIG_E3_ENABLE_PIN -1
#define ORIG_E3_CS_PIN -1
#define ORIG_SOL3_PIN -1

//###EXTRUDER_4
#define ORIG_E4_STEP_PIN -1
#define ORIG_E4_DIR_PIN -1
#define ORIG_E4_ENABLE_PIN -1
#define ORIG_E4_CS_PIN -1
#define ORIG_SOL4_PIN -1

//###EXTRUDER_5
#define ORIG_E5_STEP_PIN -1
#define ORIG_E5_DIR_PIN -1
#define ORIG_E5_ENABLE_PIN -1
#define ORIG_E5_CS_PIN -1
#define ORIG_SOL5_PIN -1

//###EXTRUDER_6
#define ORIG_E6_STEP_PIN -1
#define ORIG_E6_DIR_PIN -1
#define ORIG_E6_ENABLE_PIN -1
#define ORIG_E6_CS_PIN -1
#define ORIG_SOL6_PIN -1

//###EXTRUDER_7
#define ORIG_E7_STEP_PIN -1
#define ORIG_E7_DIR_PIN -1
#define ORIG_E7_ENABLE_PIN -1
#define ORIG_E7_CS_PIN -1
#define ORIG_SOL7_PIN -1

//###ENDSTOP
#define ORIG_X_MIN_PIN -1
#define ORIG_X_MAX_PIN -1
#define ORIG_Y_MIN_PIN -1
#define ORIG_Y_MAX_PIN -1
#define ORIG_Z_MIN_PIN -1
#define ORIG_Z_MAX_PIN -1
#define ORIG_Z2_MIN_PIN -1
#define ORIG_Z2_MAX_PIN -1
#define ORIG_Z3_MIN_PIN -1
#define ORIG_Z3_MAX_PIN -1
#define ORIG_Z4_MIN_PIN -1
#define ORIG_Z4_MAX_PIN -1
#define ORIG_E_MIN_PIN -1
#define ORIG_Z_PROBE_PIN -1

//###SINGLE_ENDSTOP
#define X_STOP_PIN 18
#define Y_STOP_PIN 19
#define Z_STOP_PIN 20

//###HEATER
#define ORIG_HEATER_0_PIN 13
#define ORIG_HEATER_1_PIN -1
#define ORIG_HEATER_2_PIN -1
#define ORIG_HEATER_3_PIN -1
#define ORIG_HEATER_BED_PIN -1
#define ORIG_HEATER_CHAMBER_PIN -1
#define ORIG_COOLER_PIN -1

//###TEMPERATURE
#define ORIG_TEMP_0_PIN 7
#define ORIG_TEMP_1_PIN -1
#define ORIG_TEMP_2_PIN -1
#define ORIG_TEMP_3_PIN -1
#define ORIG_TEMP_BED_PIN 6
#define ORIG_TEMP_CHAMBER_PIN -1
#define ORIG_TEMP_COOLER_PIN -1

//###FAN
#define ORIG_FAN_PIN -1
#define ORIG_FAN1_PIN -1
#define ORIG_FAN2_PIN -1
#define ORIG_FAN3_PIN -1

//###MISC
#define ORIG_PS_ON_PIN -1
#define ORIG_BEEPER_PIN -1
#define LED_PIN -1
#define SDPOWER -1
#define SD_DETECT_PIN -1
#define SDSS 31
#define KILL_PIN -1
#define DEBUG_PIN -1
#define SUICIDE_PIN -1

//###LASER
#define ORIG_LASER_PWR_PIN -1
#define ORIG_LASER_PWM_PIN -1

//###SERVOS
#if NUM_SERVOS > 0
	#define SERVO0_PIN -1
	#if NUM_SERVOS > 1
		#define SERVO1_PIN -1
		#if NUM_SERVOS > 2
			#define SERVO2_PIN -1
			#if NUM_SERVOS > 3
				#define SERVO3_PIN -1
			#endif
		#endif
	#endif
#endif
//@@@


//###IF_BLOCKS
#if DISABLED(__AVR_ATmega644P__) && DISABLED(__AVR_ATmega1284P__)
    #error Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu.
  #endif

  #if !MB(SANGUINOLOLU_11)
    #define SANGUINOLOLU_V_1_2
  #endif

  #if defined(__AVR_ATmega1284P__)
    #define LARGE_FLASH true
  #endif

  #if MB(AZTEEG_X1) || MB(STB_11) || MB(MELZI)
    #define ORIG_FAN_PIN           4 // Works for Panelolu2 too
    #if MB(MELZI)
      #define LED_PIN             27
    #elif MB(STB_11)
      #define LCD_BACKLIGHT_PIN   17 // LCD backlight LED
    #endif
  #endif

  #if NUM_SERVOS > 0
    #define SERVO0_PIN            -1
    #if NUM_SERVOS > 1
      #define SERVO1_PIN          -1
      #if NUM_SERVOS > 2
        #define SERVO2_PIN        -1
        #if NUM_SERVOS > 3
          #define SERVO3_PIN      -1
        #endif
      #endif
    #endif
  #endif

  #if ENABLED(SANGUINOLOLU_V_1_2)

    #define ORIG_HEATER_BED_PIN   12 // (bed)
    #define ORIG_X_ENABLE_PIN     14
    #define ORIG_Y_ENABLE_PIN     14
    #define ORIG_Z_ENABLE_PIN     26
    #define ORIG_E0_ENABLE_PIN    14

    #if ENABLED(LCD_I2C_PANELOLU2)
      #define ORIG_FAN_PIN         4 // Uses Transistor1 (PWM) on Panelolu2's Sanguino Adapter Board to drive the fan
    #endif

  #else

    #define ORIG_HEATER_BED_PIN   14  // (bed)
    #define ORIG_X_ENABLE_PIN     -1
    #define ORIG_Y_ENABLE_PIN     -1
    #define ORIG_Z_ENABLE_PIN     -1
    #define ORIG_E0_ENABLE_PIN    -1

  #endif

  /**
   * On some broken versions of the Sanguino libraries the pin definitions are wrong,
   * which then needs SDSS as pin 24. But you should upgrade your Sanguino libraries! See #368.
   */

//#define SDSS               24
  #if ENABLED(ULTRA_LCD) && ENABLED(NEWPANEL)

    // No buzzer installed
    #define ORIG_BEEPER_PIN -1

    //LCD Pins
    #if ENABLED(DOGLCD)

      #if ENABLED(U8GLIB_ST7920) //SPI GLCD 12864 ST7920 ( like [www.digole.com] ) For Melzi V2.0
        #if MB(MELZI) // Melzi board
          #define LCD_PINS_RS     30 //CS chip select /SS chip slave select
          #define LCD_PINS_ENABLE 29 //SID (MOSI)
          #define LCD_PINS_D4     17 //SCK (CLK) clock
          #define ORIG_BEEPER_PIN 27 // Pin 27 is taken by LED_PIN, but Melzi LED does nothing with Marlin so this can be used for ORIG_BEEPER_PIN. You can use this pin with M42 instead of ORIG_BEEPER_PIN.
        #else         // Sanguinololu 1.3
          #define LCD_PINS_RS      4
          #define LCD_PINS_ENABLE 17
          #define LCD_PINS_D4     30
          #define LCD_PINS_D5     29
          #define LCD_PINS_D6     28
          #define LCD_PINS_D7     27
        #endif
      #else // DOGM SPI LCD Support

        #define DOGLCD_A0         30
        #define DOGLCD_CS         29
        #define LCD_CONTRAST       1
      #endif

      // Uncomment screen orientation
      #define LCD_SCREEN_ROT_0
      //#define LCD_SCREEN_ROT_90
      //#define LCD_SCREEN_ROT_180
      //#define LCD_SCREEN_ROT_270

    #else // !DOGLCD - Standard Hitachi LCD controller
      #define LCD_PINS_RS          4
      #define LCD_PINS_ENABLE     17
      #define LCD_PINS_D4         30
      #define LCD_PINS_D5         29
      #define LCD_PINS_D6         28
      #define LCD_PINS_D7         27
    #endif // !DOGLCD

    //The encoder and click button
    #define BTN_EN1               11
    #define BTN_EN2               10
    #if ENABLED(LCD_I2C_PANELOLU2)
      #if MB(MELZI)
        #define BTN_ENC           29
        #define LCD_SDSS          30 // Panelolu2 SD card reader rather than the Melzi
      #else
        #define BTN_ENC           30
      #endif
    #else
      #define BTN_ENC             16
      #define LCD_SDSS            28 // Smart Controller SD card reader rather than the Melzi
    #endif //Panelolu2

    #define SD_DETECT_PIN         -1

  #elif ENABLED(MAKRPANEL)
    #define ORIG_BEEPER_PIN       29

    // Pins for DOGM SPI LCD Support
    #define DOGLCD_A0             30
    #define DOGLCD_CS             17
    #define LCD_BACKLIGHT_PIN     28 // backlight LED on PA3
    // GLCD features
    #define LCD_CONTRAST           1
    // Uncomment screen orientation
    #define LCD_SCREEN_ROT_0
    //#define LCD_SCREEN_ROT_90
    //#define LCD_SCREEN_ROT_180
    //#define LCD_SCREEN_ROT_270
    //The encoder and click button
    #define BTN_EN1               11
    #define BTN_EN2               10
    #define BTN_ENC               16

    #define SD_DETECT_PIN         -1

  #endif // MAKRPANEL
//@@@

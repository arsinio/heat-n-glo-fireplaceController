/*
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 *
 * @author Christopher Armenio
 */
#ifndef OVR_FIREPLACECONTROLLER_PULSETRAINCAPTURES_H_
#define OVR_FIREPLACECONTROLLER_PULSETRAINCAPTURES_H_


// ******** includes ********
#include <avr/pgmspace.h>


// ******** global macro definitions ********


// ******** global type definitions *********


// ******** global variable declarations
const uint16_t pulsePeriods_ticks_flameOff_fanOff[] PROGMEM = {
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2059, 1023, 2060, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023, 8738,
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2059,
1023, 2060, 1023, 2060, 1023, 2060, 1023, 8745,
2044, 2060, 1023, 2060, 1023, 2059, 1023, 2060,
1023, 2060, 1023, 2060, 1023, 2059, 1023, 8748,
2044, 2060, 1023, 2059, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2059, 1023, 2060, 1023, 8738,
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2060, 1023, 2059, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023
};
const uint16_t pulsePeriods_ticks_flameLow_fanOff[] PROGMEM = {
2045, 2059, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8704,
2045, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1038, 2045, 2059, 1024, 8737,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8748,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8702,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8748,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2059,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8737,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8748,
2044, 2059, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2059, 1023, 1039, 2044, 2060, 1023
};
const uint16_t pulsePeriods_ticks_flameHigh_fanOff[] PROGMEM = {
2044, 2059, 1023, 1039, 2044, 1038, 2044, 2059,
1023, 2060, 1023, 2059, 1023, 1038, 2044, 8702,
2044, 2059, 1023, 1039, 2044, 1039, 2043, 2060,
1023, 2060, 1022, 2060, 1023, 1039, 2044, 8736,
2044, 2059, 1023, 1039, 2044, 1038, 2044, 2060,
1023, 2059, 1023, 2060, 1023, 1038, 2044, 8746,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2059,
1023, 2060, 1022, 2060, 1023, 1038, 2044, 8734,
2043, 2060, 1023, 1038, 2044, 1039, 2043, 2060,
1023, 2059, 1023, 2060, 1022, 1039, 2044, 8702,
2044, 2060, 1023, 1038, 2044, 1039, 2043, 2060,
1023, 2059, 1023, 2060, 1023, 1038, 2044, 8738,
2044, 2059, 1023, 1039, 2043, 1039, 2044, 2059,
1023, 2060, 1023, 2059, 1023, 1039, 2044, 8745,
2043, 2060, 1023, 1038, 2044, 1039, 2044, 2059,
1023, 2059, 1023, 2060, 1022, 1039, 2044
};


const uint16_t pulsePeriods_ticks_flameOff_fanLow[] PROGMEM = {
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2059, 1023, 2060, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023, 8738,
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2059,
1023, 2060, 1023, 2060, 1023, 2060, 1023, 8745,
2044, 2060, 1023, 2060, 1023, 2059, 1023, 2060,
1023, 2060, 1023, 2060, 1023, 2059, 1023, 8748,
2044, 2060, 1023, 2059, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2059, 1023, 2060, 1023, 8738,
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2060, 1023, 2059, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023
};
const uint16_t pulsePeriods_ticks_flameLow_fanLow[] PROGMEM = {
2045, 2059, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8704,
2045, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1038, 2045, 2059, 1024, 8737,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8748,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8702,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8748,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2059,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8737,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8748,
2044, 2059, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2059, 1023, 1039, 2044, 2060, 1023
};
const uint16_t pulsePeriods_ticks_flameHigh_fanLow[] PROGMEM = {
2044, 2059, 1023, 1039, 2044, 1038, 2044, 2059,
1023, 2060, 1023, 2059, 1023, 1038, 2044, 8702,
2044, 2059, 1023, 1039, 2044, 1039, 2043, 2060,
1023, 2060, 1022, 2060, 1023, 1039, 2044, 8736,
2044, 2059, 1023, 1039, 2044, 1038, 2044, 2060,
1023, 2059, 1023, 2060, 1023, 1038, 2044, 8746,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2059,
1023, 2060, 1022, 2060, 1023, 1038, 2044, 8734,
2043, 2060, 1023, 1038, 2044, 1039, 2043, 2060,
1023, 2059, 1023, 2060, 1022, 1039, 2044, 8702,
2044, 2060, 1023, 1038, 2044, 1039, 2043, 2060,
1023, 2059, 1023, 2060, 1023, 1038, 2044, 8738,
2044, 2059, 1023, 1039, 2043, 1039, 2044, 2059,
1023, 2060, 1023, 2059, 1023, 1039, 2044, 8745,
2043, 2060, 1023, 1038, 2044, 1039, 2044, 2059,
1023, 2059, 1023, 2060, 1022, 1039, 2044
};


const uint16_t pulsePeriods_ticks_flameOff_fanHigh[] PROGMEM = {
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2059, 1023, 2060, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023, 8738,
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2059,
1023, 2060, 1023, 2060, 1023, 2060, 1023, 8745,
2044, 2060, 1023, 2060, 1023, 2059, 1023, 2060,
1023, 2060, 1023, 2060, 1023, 2059, 1023, 8748,
2044, 2060, 1023, 2059, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2059, 1023, 2060, 1023, 8738,
2044, 2059, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2060, 1023, 2060, 1023, 2059, 1023, 8704,
2044, 2060, 1023, 2060, 1023, 2060, 1023, 2060,
1023, 2059, 1023, 2060, 1023, 2060, 1023
};
const uint16_t pulsePeriods_ticks_flameLow_fanHigh[] PROGMEM = {
2045, 2059, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8704,
2045, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1038, 2045, 2059, 1024, 8737,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8748,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8702,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8748,
2044, 2060, 1023, 1039, 2044, 1039, 2044, 2059,
1023, 2060, 1023, 1039, 2044, 2060, 1023, 8737,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2060,
1023, 2060, 1023, 1039, 2044, 2059, 1023, 8748,
2044, 2059, 1023, 1039, 2044, 1039, 2044, 2060,
1023, 2059, 1023, 1039, 2044, 2060, 1023
};
const uint16_t pulsePeriods_ticks_flameHigh_fanHigh[] PROGMEM = {
2044, 2059, 1023, 1039, 2044, 1038, 2044, 2059,
1023, 2060, 1023, 2059, 1023, 1038, 2044, 8702,
2044, 2059, 1023, 1039, 2044, 1039, 2043, 2060,
1023, 2060, 1022, 2060, 1023, 1039, 2044, 8736,
2044, 2059, 1023, 1039, 2044, 1038, 2044, 2060,
1023, 2059, 1023, 2060, 1023, 1038, 2044, 8746,
2044, 2060, 1023, 1038, 2044, 1039, 2044, 2059,
1023, 2060, 1022, 2060, 1023, 1038, 2044, 8734,
2043, 2060, 1023, 1038, 2044, 1039, 2043, 2060,
1023, 2059, 1023, 2060, 1022, 1039, 2044, 8702,
2044, 2060, 1023, 1038, 2044, 1039, 2043, 2060,
1023, 2059, 1023, 2060, 1023, 1038, 2044, 8738,
2044, 2059, 1023, 1039, 2043, 1039, 2044, 2059,
1023, 2060, 1023, 2059, 1023, 1039, 2044, 8745,
2043, 2060, 1023, 1038, 2044, 1039, 2044, 2059,
1023, 2059, 1023, 2060, 1022, 1039, 2044
};


// ******** global function prototypes ********


#endif

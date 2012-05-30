/*
 * calibration.h
 *
 *  Created on: 1 juin 2011
 *      Author: Matlo
 */

#ifndef CALIBRATION_H_
#define CALIBRATION_H_

#include "config.h"

typedef enum
{
  NONE,
  MC,
  CC,
  MX,
  MY,
  DZX,
  DZY,
  DZS,
  RD,
  VEL,
  EX,
  EY,
  TEST
}e_current_cal;

extern int current_mouse;
extern int current_conf;
extern e_current_cal current_cal;

void cal_button(int, int);
void cal_key(int, int, int);
inline s_mouse_cal* cal_get_mouse(int, int);
int cal_skip_event(SDL_Event*);
void cal_init();
inline int cal_get_controller(int);
inline void cal_set_controller(int, int);
void calibration_test();

#endif /* CALIBRATION_H_ */

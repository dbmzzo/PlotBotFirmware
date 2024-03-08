#ifndef State_h
#define State_h

#include "Constants.h"
#include <AccelStepper.h>
#include <MultiStepper.h>
#include <ESP32Servo.h>

extern BLEService controlService;
extern AccelStepper w1;
extern AccelStepper w2;
extern AccelStepper w3;
extern MultiStepper steppers;

extern float speed;
extern int isSleeping;
extern float direction;
extern float rotation;
extern long unsigned int wakeTimer;

#endif


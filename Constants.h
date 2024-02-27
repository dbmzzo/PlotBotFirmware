#ifndef Constants_h
#define Constants_h

#include <Arduino.h>
#include <ArduinoBLE.h>

const char W1_STEP = 5;
const char W1_DIR = 4;
const char W2_STEP = 7;
const char W2_DIR = 6;
const char W3_STEP = 16;
const char W3_DIR = 15;
const char SLEEP = 18;

const char CHAR_DESCRIPTOR_COUNT = 6;
const char WHEEL_DIAMETER = 58;
const char STEPS_PER_MM = (200 * 16) / (3.1415 * WHEEL_DIAMETER);
const int RUN_SPEED = 4000;
const int ACCELERATION = 100;
const char FEED_SPEED = 150;
const int MAX_COMMAND_SIZE = 512;
const int MAX_COMMAND_ARRAY_SIZE = 1024;
const char STEPS_PER_REV = 200;
const float SLEEP_DELAY = 15000.0;

const char DIR_UUID[37] = "a393436b-8be0-4280-bff8-b357bf1e30c7";
const char SPEED_UUID[37] = "bcdf77f1-7b10-41fa-9ed5-83bc69fd3fde";
const char ROTATION_UUID[37] = "7621b66b-10ee-4172-b3bf-dad42cd5972d";
const char DESC_UUID[5] = "2901";

const char SERVICE_UUID[37] = "66879f41-f094-44e2-8da7-2231d83bddd4";
const char DATA_TYPE_DESCRIPTOR_UUID[37] = "13ac0c9b-330b-46cd-9cc7-068e77da9ae1";

enum CharDataType {
  DATA_VELOCITY,
  DATA_MAX_SPEED,
  DATA_ROTATION,
};

const char CHAR_DATA_TYPE_NAME[CHAR_DESCRIPTOR_COUNT][16] = {
  "Velocity", "Maximum Speed", "Rotation", "Command", "Battery", "Scale"
};

#endif

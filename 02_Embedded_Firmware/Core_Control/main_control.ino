/*
 * Custom Core Control Architecture for 2-Wheel Differential Micromouse
 * Target Hardware: STM32F103C8T6 (Blue Pill) + TB6612FNG Motor Driver
 */

#include <Arduino.h>

// --- PIN CONFIGURATIONS (STM32 Blue Pill) ---
const int LEFT_MOTOR_PWM  = PA0;  
const int LEFT_MOTOR_IN1  = PA1;  
const int LEFT_MOTOR_IN2  = PA2;
const int RIGHT_MOTOR_PWM = PA3;  
const int RIGHT_MOTOR_IN1 = PA4;  
const int RIGHT_MOTOR_IN2 = PA5;

void setup() {
    pinMode(LEFT_MOTOR_PWM, OUTPUT);
    pinMode(LEFT_MOTOR_IN1, OUTPUT);
    pinMode(LEFT_MOTOR_IN2, OUTPUT);
    pinMode(RIGHT_MOTOR_PWM, OUTPUT);
    pinMode(RIGHT_MOTOR_IN1, OUTPUT);
    pinMode(RIGHT_MOTOR_IN2, OUTPUT);
    
    // Spin wheels forward by default
    digitalWrite(LEFT_MOTOR_IN1, HIGH);
    digitalWrite(LEFT_MOTOR_IN2, LOW);
    digitalWrite(RIGHT_MOTOR_IN1, HIGH);
    digitalWrite(RIGHT_MOTOR_IN2, LOW);
}

void loop() {
    int baselineSpeed = 120; 
    analogWrite(LEFT_MOTOR_PWM, baselineSpeed);
    analogWrite(RIGHT_MOTOR_PWM, baselineSpeed);
    delay(10); 
}

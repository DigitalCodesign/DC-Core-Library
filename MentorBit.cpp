/*
 * MentorBit.cpp - Librería base para MentorBit Arduino
 *
 * Creado el 24/08/2023 por Kevin Rosa - kevin.ingenieria@digitalcodesign.com
 * 
 * Definición de la clase base MentorBit,
 * referida al MentorBit compatible con Arduino.
 */

#include "MentorBit.h"

/*
 * Constructor de la clase base del MentorBit.
 *
 * Devuelve una instancia de la clase MentorBit que provee los pines de conexión
 * de los elementos básicos de la placa.
 * 
 * -> LED de colores
 * -> LED RGB
 * -> Pulsadores
 * -> Zumbador
 * -> Potenciómetro
 */
MentorBit::MentorBit()
{

    ledRojo = 5;
    ledVerde = 6;
    ledAzul = 7;
    rgbRojo = 8;
    rgbVerde = 9;
    rgbAzul = 10;
    pulsadorPullUpDigital = 22;
    pulsadorPullDownDigital = 23;
    zumbador = 25;
    potenciometro = PIN_A0;
    pulsadorPullDownAnalogico = PIN_A2;
    pulsadorPullUpAnalogico = PIN_A3;

    pinMode(ledRojo, OUTPUT);
    pinMode(ledVerde, OUTPUT);
    pinMode(ledAzul, OUTPUT);
    pinMode(rgbRojo, OUTPUT);
    pinMode(rgbVerde, OUTPUT);
    pinMode(rgbAzul, OUTPUT);
    pinMode(pulsadorPullUpDigital, INPUT);
    pinMode(pulsadorPullDownDigital, INPUT);
    pinMode(zumbador, OUTPUT);
    pinMode(potenciometro, INPUT);
    pinMode(pulsadorPullDownAnalogico, INPUT);
    pinMode(pulsadorPullUpAnalogico, INPUT);

}

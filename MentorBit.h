/*
 * MentorBit.h - Librería base para MentorBit Arduino
 *
 * Creado el 24/08/2023 por Kevin Rosa - kevin.ingenieria@digitalcodesign.com
 * 
 * Declaración de atributos y métodos para la clase base MentorBit,
 * referida al MentorBit compatible con Arduino y sus elementos básicos.
 * 
 * -> LEDs
 * -> LED RGB
 * -> Pulsadores
 * -> Zumbador
 * -> Potenciómetro
 */

#ifndef MentorBit_h
#define MentorBit_h

    #include "Arduino.h"

    class MentorBit
    {

        public:

            MentorBit();

            uint8_t ledRojo;
            uint8_t ledVerde;
            uint8_t ledAzul;
            uint8_t rgbRojo;
            uint8_t rgbVerde;
            uint8_t rgbAzul;
            uint8_t pulsadorPullUpDigital;
            uint8_t pulsadorPullDownDigital;
            uint8_t zumbador;
            uint8_t potenciometro;
            uint8_t pulsadorPullDownAnalogico;
            uint8_t pulsadorPullUpAnalogico;

    };

#endif

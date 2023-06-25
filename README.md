# Example baremetal Arduino template

Currently only supports the Arduino Uno, or Atmega328p microcontroller. 

## Dependencies:
    - avr-libc
    - avrdude
    - avr-binutils
    - avr-gcc

## To run:
    - make uno

## To find port of board:
    - ls /dev/ | grep ACM

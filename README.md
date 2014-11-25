kerbalduino
===========
An Arduino based Kerbal Space Program controller


This version is using the Arduino UNO R3 which lacks the ability to function as a keyboard or mouse like the Leonardo has. However, this can be overcome by using the Arduino to speak a custom protocol to controler.py which uses uinput to trigger the keystrokes. This has a large number of dependencies though. And given the polling nature of the serial communication, will probably be just slow enough to fail a key moments.

A future version with a Leonardo is probably to come at which point it will beome the default and this will be forked.